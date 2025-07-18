a=list(map(int,input("enter a list : ").split()))
b=list(map(int,input("enter a list : ").split()))
res=[]
for i in range (len(a)):
     for j in range (len(b)):
          if a[i] == b[j]:
               if a[i] not in res:
                    res.append(a[i])
                   
print(res)