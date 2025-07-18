lst = [(1, 2), (3, 4), (1, 2), (5, 6)]

unique = []
for item in lst:
    if item not in unique:
        unique.append(item)

print(unique)
