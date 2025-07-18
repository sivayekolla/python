a=list(map(int,input("enter a list : ").split()))
b=1
i=0
c=(len(a)//2)
flag=1
while i<c:
     if a[i]!=a[-b]:
          flag=0
          break
     b+=1
     i+=1
if(flag):
     print("palindrome")
else:
     print("not palindrome")
