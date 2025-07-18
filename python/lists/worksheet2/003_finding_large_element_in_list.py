a=list(map(int,input("enter a list : ").split()))
b=a[0]
for i in range(len(a)):
     if a[i] >b:
          b=a[i]
print(b)