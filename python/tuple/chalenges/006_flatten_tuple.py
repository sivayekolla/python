t = ([1, 2], [3, 4], [5, 6])

flat = tuple(item for sublist in t for item in sublist)

print(flat)
