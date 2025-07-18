lst = [1, 2, 3, (4, 5), 6]

count = 0
for item in lst:
    if isinstance(item, tuple):
        break
    count += 1

print(count)
