a=str(input("enter string : "))
b=len(a)
p=1
for i in range(b):
     if a[i] != '0' and a[i] != '1':
          print("not binary string: ")
          p=0
          break
if(p):
     print("its a binary string : ")
