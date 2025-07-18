i=100
for i in range(i,1000):
     b=1
     temp=i
     k=0
     for j in range(1,4):
          b=temp%10
          temp//=10
          k+=(b*b*b)
     if(k==i):
          print(i)
    