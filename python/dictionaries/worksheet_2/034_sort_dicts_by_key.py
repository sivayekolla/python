dicts = [{'a': [5,1]}, {'a': [3,4]}, {'a': [7,0]}]
index = 1
sorted_dicts = sorted(dicts, key=lambda d: d['a'][index])
print(sorted_dicts)
