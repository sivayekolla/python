d = {'x': {'p': 1}, 'y': {'q': 2}}
result={}
for outer_key,inner_dict in d.items():
    for inner_key,value in inner_dict.items():
        result[inner_key]={outer_key:value}
print(result)