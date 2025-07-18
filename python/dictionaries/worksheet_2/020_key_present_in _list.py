d = {'a': 100, 'b': 200, 'c': 300}
lst=['b','c','d']
result_d={key:val for key,val in d.items() if key in lst}
print(result_d)