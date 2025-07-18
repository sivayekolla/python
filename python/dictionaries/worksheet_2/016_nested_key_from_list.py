lst = ['a', 'b', 'c', 'd']

nested = current = {}
for item in lst:
    current[item] = {}
    current = current[item]
print(nested)
