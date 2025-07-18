d = {'x': 100, 'y': 'hello', 'z': 200}
result={key:value for key,value in d.items() if isinstance(value,int)}
print(result)