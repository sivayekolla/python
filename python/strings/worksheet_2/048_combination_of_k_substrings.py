a=list(map(str,input("enter bunch of major strings : ").split()))
b=list(map(str,input("enter substrings :").split()))
res=[]
for i in range(len(a)):
     found=1
     for j in range(len(b)):
          if b[j] not in a[i]:
               found=0
     if found:
          res.append(a[i])
print(res)