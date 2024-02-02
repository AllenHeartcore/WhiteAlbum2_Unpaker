// ToolName LTMPGEnc 4.0 XPress Version. 4.6.3.267
// WMFSDKVersion 11.0.5721.5265
// WMFSDKNeeded 0.0.0.0000
// IsVBR (ASFLeakuBucketPairs)

// ToolName LTMPGEnc 4.0 XPress Version. 4.7.0.280
// WMFSDKVersion 11.0.5721.5275
// WMFSDKNeeded 0.0.0.0000
// IsVBR (ASFLeakuBucketPairs)

// WM/ToolName     : TMPGEnc 4.0 XPress Version. 4.6.3.267 (or 4.7.0.280)
// WMFSDKVersion   : 11.0.5721.5265 (or 11.0.5721.5275)
// WMFSDKNeeded    : 0.0.0.0000
// IsVBR           : 1
// DeviceConformanceTemplate: MP@HL
// encoder         : Lavf60.3.100

// for /R %%f in (*.pak) do (ffmpeg -i "%%f" ".../%%f.mp4")
// foreach ($file in Get-ChildItem) {ffmpeg -i $file ../$file.mp4}


#include <stdint.h>
typedef unsigned char byte;
typedef unsigned int uint;


int FUN_00436df0(byte *out, byte *in, int inlen, int outlen) {


    byte byte1;
    byte byte2;
    bool outlen_overflowed = false;

    byte array[0x1000];

    int inlen_counter = 0;
    int outlen_counter = 0;
    int decrypt_counter;

    uint array_reader;
    uint array_writer = 0xFEE;
    uint loopvar;

    undefined *status;


    memset(array, 0x20, 0xFEE);


    for (loopvar = 0; (loopvar & 0x100) != 0; loopvar = loopvar >> 1) {
LOOP:

        if (inlen_counter >= inlen) {
            status = &DAT_004a40e4;
            goto INLEN_OVERFLOW;
        }

        byte1 = *in++;
        inlen_counter++;

        if ((loopvar & 1) == 0) {
            if (inlen_counter >= inlen) {
                status = &DAT_004a40e0;
                goto INLEN_OVERFLOW;
            }

            byte2 = *in++;
            inlen_counter++;

            array_reader = (uint)byte1 | (byte2 & 0xF0) << 4;
            decrypt_counter = (byte2 & 0xF) + 2;
            while (decrypt_counter--) {
                if (outlen_counter > outlen) {
                    outlen_overflowed = true;
                    break;
                }
                byte1 = array[array_reader++ & 0xFFF];
                array[array_writer++ & 0xFFF] = byte1;
                *out++ = byte1;
                outlen_counter++;
            };
        }

        else {
            array[array_writer++ & 0xFFF] = byte1;
            *out++ = byte1;
            outlen_counter++;
        }

        if (outlen_counter > outlen) goto OUTLEN_OVERFLOW;
    }


    if (inlen_counter < inlen) {
        loopvar = *in++ | 0xFF00;
        inlen_counter++;
        goto LOOP;
    }


    status = &DAT_004a40e8;
INLEN_OVERFLOW:
    FUN_0044be20(status);
    if (!outlen_overflowed) goto RETURN;
OUTLEN_OVERFLOW:
    FUN_0044beb0(0, &DAT_004a40d4);
RETURN:
    return array_writer - 0xFEE;
}
