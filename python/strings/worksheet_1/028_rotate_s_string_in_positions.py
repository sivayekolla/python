a=str(input("enter a string : "))
b=int(input("enter no of rotations : "))
c=a[-b:]+a[:-b]
print(c)