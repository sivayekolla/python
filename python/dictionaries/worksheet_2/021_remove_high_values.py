d = {'a': 5, 'b': 10, 'c': 15, 'd': 'big'}
limit=10
result={key:val for key,val in d.items() if isinstance(val,(int,float))and val <= limit}
print(result)