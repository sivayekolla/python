d = {'c': [3,1], 'a': [2,4], 'b': [5,1]}

result=[(k,sorted(v)) for k,v in sorted(d.items())]
print(dict(result))