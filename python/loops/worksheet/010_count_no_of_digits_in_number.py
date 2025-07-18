a=int(input("enter a value : "))
count=0
while(a):
     b=a%10
     a=a//10
     if(b>=0):
          count+=1
print(count)