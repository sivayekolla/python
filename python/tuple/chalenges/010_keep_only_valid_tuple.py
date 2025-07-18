lst = [(None, None), (1, 2), (None, 3), (4, 5), (None, None)]

filt = [t for t in lst if not all(x is None for x in t)]

print(filt)
