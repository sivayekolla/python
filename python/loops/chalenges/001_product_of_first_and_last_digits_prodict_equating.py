a=int(input("enter a 4 digit value"))
b=1
c=1
for i in range(2):
     b=b*(a%10)
     a//=10
for j in range(2):
     c=c*(a%10)
     a//=10
if(b==c):
     print("valid")
else:
     print("not valid")

