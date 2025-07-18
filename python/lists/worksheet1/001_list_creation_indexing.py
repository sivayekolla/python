fruit=list(input("enter a value : ").split())
print(fruit[1])
n=len(fruit)
i=0
for i in range(n):
     if fruit[i]=="banana":
          fruit[i]="kiwi"
     i+=1
print(fruit)