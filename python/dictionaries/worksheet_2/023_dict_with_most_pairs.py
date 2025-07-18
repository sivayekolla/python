dicts = [{'a': 1, 'b': 2}, {'x': 1, 'y': 2, 'z': 3}, {'k': 9}]
res={}
max_cnt=0
for inner_dict in dicts:
    cnt=0
    for ch in inner_dict:
        cnt+=1
    if cnt>max_cnt:
        max_cnt=cnt
        res=inner_dict
print(res)
