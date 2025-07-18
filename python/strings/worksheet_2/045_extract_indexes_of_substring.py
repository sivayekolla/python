a=str(input("enter a string : "))
b=str(input("enter a sub string : "))
ind=[]
for i in range(len(a)):
     if a[i : i+len(b)] == b:
          ind.append(i)
print(ind)
