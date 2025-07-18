a=tuple(map(int,input("entera tuple  : ").split()))
a=list(a)
b=int(input("enter a value to add :"))
for i in range(len(a)):
     if a[i] == b:
          a.pop(i)
          a=tuple(a)
          print(a)
          break

     

     
