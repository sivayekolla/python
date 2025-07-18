#22
a=list(map(int,input("enter a list : ").split()))
max=-999999
count=0
b=0
for i in range(len(a)):
     if a[i] > max:
          max=a[i]
          count+=1
print(count)
