a=str(input("enter a string : "))
s=a
j=0
for i in range(len(a)):
     s=s[-1:]+s[:-1]
     if s == a:
          break
     else:
          j+=1
print(j)
     