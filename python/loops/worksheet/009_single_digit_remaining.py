a=int(input("enter a value : "))
while(a>=10):
     sum=0
     while(a):
          c=a%10
          a//10
          sum+=c
     a=sum
print(a)
