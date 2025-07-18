a=list(map(int,input("enter a list : ").split()))
for i in range(20):
     if a[i]%2==0:
          for k in range(2):
               c=a[i]*a[i]
          print(c)
     else:
          for p in range (2):
               d=a[i]*a[i]
          d=d*a[i]
          print(d)