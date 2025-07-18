a=int(input("enter a value :"))
b=1
c=0
k=3
temp=a
while(k):
     temp1=temp%10
     temp//=10
     for i in range(1,temp1+1):
          b=i*b
     c=c+b
     b=1
     k-=1
if(c==a):
     print("valid")
else:
     print("not valid")