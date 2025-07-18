a=tuple(map(str,input("entera tuple  : ").split()))
b=str(input("enter a string to find in tuple :"))
for i in range(len(a)):
     if b == a[i]:
          print(i)
          break
