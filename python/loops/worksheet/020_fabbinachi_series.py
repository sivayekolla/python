a=0
b=1
c=int(input("enter no of elements in fab series :"))
print(a," ",b,end=" ")
for i in range((c-2)):
     c=a+b
     a=b
     b=c
     print(" "+c,end=" ")

