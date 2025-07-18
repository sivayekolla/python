def grade(i):
     if(i>=90):
          return("a")
     elif(i>=80 and i<90):
          return("b")
     elif(i>=70 and i<80):
          return("c")
     else:
          return("f")
a=int(input("enter a value : "))
print(grade(a))