a,b=map(int,input("enter number and rotations").split())
b=b%32
c=  ((a<<b)|(a>>(32-b))) 
print(c)