auction = {'lot1': 'coin', 'lot2': 'stamp', 'lot3': 'coin', 'lot4': 'comic'}
a=[]
for keys,values in auction.items():
     a.append(values)
a=set(a)
a=list(a)
print(a)
