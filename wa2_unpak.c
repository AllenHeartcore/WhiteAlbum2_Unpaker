#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define MAGIC_PACK  0x5041434B
#define MAGIC_LAC0  0x0043414C
#define MAGIC_TMPG1 0x75B22630
#define MAGIC_TMPG2 0x11CF668E
#define MAGIC_TMPG3 0xAA00D9A6
#define MAGIC_TMPG4 0x6CCE6200

typedef struct __attribute__((packed)) {
    uint32_t magic;
    uint32_t unk1;
    uint32_t unk2;
    uint32_t nentry;
} header_t;

typedef struct __attribute__((packed)) {
    uint32_t crypted;
    char name[24];
    uint32_t unk1;
    uint32_t unk2;
    uint32_t offset;
    uint32_t size;
} entry_t;



int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    FILE *fpin = fopen(filename, "rb");
    if (fpin == NULL) {
        printf("Error: cannot open input file '%s'\n", argv[1]);
        return 1;
    }

    char *outdir = (char *)malloc(strlen(filename) + 1);
    strcpy(outdir, filename);
    strcpy(strrchr(outdir, '.'), "/\0");
    mkdir(outdir, 0777);

    header_t header;
    fread(&header, sizeof(header_t), 1, fpin);
    if (header.magic != MAGIC_PACK) {
        printf("Error: invalid magic number\n");
        return 1;
    }

    entry_t *entries = (entry_t *)malloc(sizeof(entry_t) * header.nentry);
    fread(entries, sizeof(entry_t), header.nentry, fpin);

    for (int i = 0; i < header.nentry; i++) {
        char *outname = (char *)malloc(strlen(outdir) + strlen(entries[i].name) + 1);
        strcpy(outname, outdir);
        strcat(outname, entries[i].name);
        printf("%s\n", outname);
        fseek(fpin, entries[i].offset, SEEK_SET);

        FILE *fpout = fopen(outname, "wb");
        if (fpout == NULL) {
            printf("Error: cannot open output file '%s'\n", outname);
            return 1;
        }

        if (entries[i].crypted == 0) {
            uint8_t *buf = (uint8_t *)malloc(entries[i].size);
            fread(buf, entries[i].size, 1, fpin);
            fwrite(buf, entries[i].size, 1, fpout);
            free(buf);
        }

        else {
            uint8_t flag, byte1, byte2;
            uint8_t arr[0x1000] = {0};
            memset(arr, 0x20, 0xFEE);
            uint32_t arr_r, arr_w = 0xFEE;

            uint32_t inlim, outlim, counter;
            uint32_t insize = 0, outsize = 0;
            fread(&inlim, 4, 1, fpin);
            fread(&outlim, 4, 1, fpin);

            while (1) {
                fread(&flag, 1, 1, fpin);
                insize++;
                for (int j = 0; j < 8; j++) {
                    if (insize >= inlim || outsize >= outlim)
                        goto DONE;
                    fread(&byte1, 1, 1, fpin);
                    insize++;
                    if (!(flag & 1)) {
                        fread(&byte2, 1, 1, fpin);
                        insize++;
                        arr_r = byte1 | (byte2 & 0xF0) << 4;
                        counter = (byte2 & 0xF) + 3;
                        while (counter--) {
                            byte1 = arr[arr_r++ & 0xFFF];
                            arr[arr_w++ & 0xFFF] = byte1;
                            fwrite(&byte1, 1, 1, fpout);
                            outsize++;
                        }
                    } else {
                        arr[arr_w++ & 0xFFF] = byte1;
                        fwrite(&byte1, 1, 1, fpout);
                        outsize++;
                    }
                    flag >>= 1;
                }
            }
        }

DONE:
        fclose(fpout);
    }

    fclose(fpin);
    return 0;
}
