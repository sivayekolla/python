a=str(input("enter string : "))
b=[]
a=list(a)
for i in range(len(a)):
     if a[i] not in b:
          b.append(a[i])
          continue
b=set(b)
print(b)