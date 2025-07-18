d = {'m': 1, 'n': 2, 'o': 1}
result={}
for key,val in d.items():
    if val not in result:
        result[val]=list(key)
    else:
        result[val].append(key)
print(result)