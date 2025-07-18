a=tuple(map(int,input("enter elements to tuple : ").split()))
final=[]
mul=1
for i in range (len(a)):
     mul*=a[i]
print(mul)