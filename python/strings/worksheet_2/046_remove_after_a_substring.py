a=str(input("enter a string : "))
b=str(input("enter a sub string :"))
res=""
s=a.index(b)
final=a[:s]
a=final
print(a)