def sign(a):
     if(a>0):
          return ("positive")
     elif(a==0):
          return ("zero")
     else:
          return("negative")
a=int(input("enter a value : "))
print(sign(a))