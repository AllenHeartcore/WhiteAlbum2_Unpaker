import os
import numpy as np
from PIL import Image
from tqdm import tqdm

for r, ds, fs in os.walk('Character'):
    for f in tqdm(fs):
        if f.endswith('.png'):

            img = Image.open(os.path.join(r, f))
            arr = np.array(img)
            alpha = np.maximum(arr[:, :, 3], 2) - 2
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
