def manip(a,b):
     c=0
     for i in range(0,b):
          c=c+a[i]
     return c
         
a=list(map(int,input("enter a list of numbers : ").split()))
b=len(a)
print(f"sum of list is :{manip(a,b)}")