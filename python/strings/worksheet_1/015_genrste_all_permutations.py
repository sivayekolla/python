import itertools

a=str(input("enter a string : "))
b=list(itertools.permutations(a))
for i in range(len(b)):
     b[i]="".join(b[i])
print(b)
