import numpy as np
import os, subprocess
from PIL import Image
from sys import argv

tostr = lambda x: x.decode('shift-jis').strip('\x00')
tohex = lambda x: ''.join(['%02X' % i for i in x[::-1]])
toint = lambda x: int(tohex(x), 16)

fin = argv[1]
fpin = open(fin, 'rb')
magic = toint(fpin.read(4))
outpath = '.'.join(fin.split('.')[:-1])



if magic == 0x5041434B:     # PACK
    fpin.read(8)    # unused
    nentry = toint(fpin.read(4))
    os.makedirs(outpath, exist_ok=True)

    for i in range(nentry):

        fpin.seek(16 + i * 44)
        crypted = toint(fpin.read(4))
        name    = tostr(fpin.read(24))
        fpin.read(8)    # unused
        offset  = toint(fpin.read(4))
        size    = toint(fpin.read(4))
        fpin.seek(offset)

        fout = '%s/%s' % (outpath, name)
        print(fout, end='')
        fpout = open(fout, 'wb')
        if size == 0:
            fpout.close()
            continue

        if not crypted:
            fpout.write(fpin.read(size))
        else:
            inceil = toint(fpin.read(4))
            outceil = toint(fpin.read(4))
            arr = np.zeros(0x1000, dtype=np.uint8)
            arr[:0xFEE] = np.ones(0xFEE, dtype=np.uint8) * 0x20
            insize, outsize, arr_w = 0, 0, 0xFEE
            while insize < inceil and outsize < outceil:
                flag = ord(fpin.read(1))
                insize += 1
                for _ in range(8):
                    if insize >= inceil or outsize >= outceil:
                        break
                    b1 = ord(fpin.read(1))
                    insize += 1
                    if not flag & 1:
                        b2 = ord(fpin.read(1))
                        insize += 1
                        arr_r = b1 | (b2 & 0xF0) << 4
                        counter = (b2 & 0xF) + 3
                        while counter:
                            b1 = arr[arr_r & 0xFFF]
                            arr[arr_w & 0xFFF] = b1
                            fpout.write(bytes([b1]))
                            arr_r += 1
                            arr_w += 1
                            outsize += 1
                            counter -= 1
                    else:
                        arr[arr_w & 0xFFF] = b1
                        fpout.write(bytes([b1]))
                        arr_w += 1
                        outsize += 1
                    flag >>= 1

        fpout.close()

        if fout.endswith('.txt'):
            try:
                with open(fout, encoding='shift-jis') as src:
                    with open(fout.replace('.txt', '.tmp'), 'w', encoding='utf-8') as dest:
                        dest.write(src.read())
                os.remove(fout)
                os.rename(fout.replace('.txt', '.tmp'), fout)
                print(' (Converted to UTF-8)', end='')
            except UnicodeDecodeError:
                pass

        if fout.endswith('.bmp') or fout.endswith('.tga'):
            try:
                Image.open(fout).save(fout[:-4] + '.png')
                os.remove(fout)
                print(' (Converted to PNG)', end='')
            except ValueError:
                pass

        print()



elif magic == 0x0043414C:     # LAC0
    nentry = toint(fpin.read(4))
    os.makedirs(outpath, exist_ok=True)

    for i in range(nentry):

        fpin.seek(8 + i * 40)
        name    = tohex(fpin.read(32)).strip('0')
        size    = toint(fpin.read(4))
        offset  = toint(fpin.read(4))
        fpin.seek(offset)

        fout = '%s/%s' % (outpath, name)
        header = toint(fpin.read(4))
        if header == 0x5367674F:
            fout += '.ogg'
        elif header == 0x46464952:
            fout += '.wav'
        else:
            print('WARNING: Unrecognized audio format')

        print(fout)
        fpin.seek(offset)
        fpout = open(fout, 'wb')
        fpout.write(fpin.read(size))
        fpout.close()



elif magic == 0x75B22630:     # TMPG
    assert toint(fpin.read(12)) == 0x6CCE6200AA00D9A611CF668E
    command = 'ffmpeg -i %s %s.mp4' % (fin, outpath)
    process = subprocess.Popen(command, shell=True)
    process.wait()



else:
    print('Invalid magic number')
    exit(1)

fpin.close()
