a=list(map(int,input("enter a list : ").split()))
b=int(input("enter a value to remove :"))
for i in a[:]:
     if i == b:
          a.remove(i)
print(a)
