import os
import numpy as np
from PIL import Image
from tqdm import tqdm

thres_bg = 2

for r, ds, fs in os.walk('Character'):
    for f in tqdm(fs):
        if f.endswith('.png'):

            img = Image.open(os.path.join(r, f))
            arr = np.array(img)
            alpha = arr[:, :, 3]
            w, h = img.size

            # Remove background
            if alpha[0, 0] != 0 or alpha[0, -1] != 0 \
                or alpha[-1, 0] != 0 or alpha[-1, -1] != 0:
                alpha = np.where(alpha <= thres_bg, 0, alpha)
                arr[:, :, 3] = alpha
                img = Image.fromarray(arr)
                img.save(os.path.join(r, f))

            # Crop whitespace
            sum_h = np.sum(alpha, axis=0)
            lim_l, lim_r = 0, 0
            while sum_h[lim_l + 1] == 0:
                sum_h[lim_l] = 0
                lim_l = np.argmax(sum_h > 0)
            while sum_h[w - lim_r - 2] == 0:
                sum_h[w - lim_r - 1] = 0
                lim_r = np.argmax(sum_h[::-1] > 0)
            lim = np.minimum(lim_l, lim_r)
            if lim > 0:
                img = img.crop((lim, 0, w - lim, h))
                img.save(os.path.join(r, f))

            # Unify height
            assert h <= 720
            if h < 720:
                arr = np.array(img)
                canvas = Image.new('RGBA', (w - lim * 2, 720),
                    (arr[0, 0, 0], arr[0, 0, 1], arr[0, 0, 2], alpha[0, 0]))
                canvas.paste(img, (0, 720 - h), img)
                canvas.save(os.path.join(r, f))
