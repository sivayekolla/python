d = {'sun': 1, 'sunny': 2, 'rain': 3}
substring = 'sun'
result={key:val for key,val in d.items() if substring not in key}
print(result)