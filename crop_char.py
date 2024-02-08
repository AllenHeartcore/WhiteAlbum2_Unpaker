import os
import numpy as np
from PIL import Image
from tqdm import tqdm

remove_bg = False
thres_bg = 2

for r, ds, fs in os.walk('Character'):
    for f in tqdm(fs):
        if f.endswith('.png'):

            img = Image.open(os.path.join(r, f))
            arr = np.array(img)
            alpha = arr[:, :, 3]
            if alpha[0, 0] != 0:
                remove_bg = True
                alpha = np.maximum(alpha, thres_bg) - thres_bg
            w, h = img.size

            sum_h = np.sum(alpha, axis=0)
            lim_l, lim_r = 0, 0
            while sum_h[lim_l + 1] == 0:
                sum_h[lim_l] = 0
                lim_l = np.argmax(sum_h > 0)
            while sum_h[w - lim_r - 2] == 0:
                sum_h[w - lim_r - 1] = 0
                lim_r = np.argmax(sum_h[::-1] > 0)
            lim_h = np.minimum(lim_l, lim_r)

            sum_v = np.sum(alpha, axis=1)
            lim_v = 0
            while sum_v[lim_v + 1] == 0:
                sum_v[lim_v] = 0
                lim_v = np.argmax(sum_v > 0)

            if lim_h > 0 or lim_v > 0:
                img = img.crop((lim_h, lim_v, w - lim_h, h))
                img.save(os.path.join(r, f))

            if remove_bg:
                # alpha = np.array(img)[:, :, 3]
                # alpha = np.where(alpha <= thres_bg, 0, alpha)
                # arr[:, :, 3] = alpha
                # Image.fromarray(arr).save(os.path.join(r, f))
                pass

for r, ds, fs in os.walk('Character'):
    for f in tqdm(fs):
        if f.endswith('.png'):
            img = Image.open(os.path.join(r, f))
            w, h = img.size
            assert h <= 720
            if h < 720:
                arr = np.array(img)
                canvas = Image.new('RGBA', (w, 720),
                    (arr[0, 0, 0], arr[0, 0, 1], arr[0, 0, 2], arr[0, 0, 3]))
                canvas.paste(img, (0, 720 - h), img)
                canvas.save(os.path.join(r, f))
