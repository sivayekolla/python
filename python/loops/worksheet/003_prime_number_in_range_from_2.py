a=int(input("enter a number"))
n=2
for i in range(n,a):
     count=0
     for j in range(n,i):
          if((i%j)==0):
               count+=1
     if(count==0):
          print(i)
