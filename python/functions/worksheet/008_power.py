def power(base,exponent=2):
     c=1
     for i in range(1,exponent):
          c=c*base
     return c
a,b=map(int,input("enter a value : ").split())
print(power(a,b))