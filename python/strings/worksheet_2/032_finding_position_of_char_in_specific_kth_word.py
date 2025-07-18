a=list(map(str,input("enter list of strings : ").split()))
b=int(input("enter string number : "))
c=str(input("enter a charecter to find : "))
a1=a[b]
index=a1.find(c)
if index != -1:
     print(index)
else:
     print("index not found")