a=list(map(str,input("enter a string of list : ").split()))
d={}
i=0
for i in range (len(a)) :
     d[a[i]]=i
print(d)
