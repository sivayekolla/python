d = {'group1': {'b': 2, 'a': 1}, 'group2': {'c': 3, 'd': 0}}
for di in d:
    d[di]=sorted(d[di].items(),key=lambda x:x[1])
print(d)
