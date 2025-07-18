a=tuple(map(int,input("entera tuple  : ").split()))
max=-10000000
min=1000000
for i in range(len(a)):
     if a[i]<min:
          min=a[i]
     if a[i] > max:
          max=a[i]
print("max and min are : ",max,min)
     
