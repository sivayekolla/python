a=tuple(map(int,input("enter a value : ").split()))
c=a
b=0
for i in range(len(a)):
     for j in range((len(a))):
          if i != j:
               if (a[i] ^ c[j])==0:
                    b=1
if(b):
     print(False)
else:
     print(True)
