a=list(map(int,input("enter list : ").split()))
res=[]
for i in range(len(a)):
     if a[i]%2==0 :
          res.append(a[i])
print(res)