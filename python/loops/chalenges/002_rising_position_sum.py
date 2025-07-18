a=int(input("enter a 3 digit number : "))
b=1
c=0
k=3
temp=a
while(k):
     temp1=temp%10
     temp//=10
     for i in range(1,k+1):
          b=b*temp1
     c=c+b
     b=1
     k-=1
if(a==c):
     print("valid")
else:
     print("not valid")
     
