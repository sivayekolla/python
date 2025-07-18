a = list(map(int, input("enter a list : ").split()))
res = []
for i in a:
    if i not in res:
        res.append(i)
print(res)
