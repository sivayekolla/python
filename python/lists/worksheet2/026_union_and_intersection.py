a=list(map(int,input("enter a integer : ").split()))
b=list(map(int,input("enter a integer : ").split()))
union=[]
for i in range(len(a)):
     union.append(a[i])
for i in range(len(b)):
     if(b[i]) not in union:
          union.append(b[i])
inter=[]
for i in range(len(a)):
     if a[i] in b:
          inter.append(a[i])
print(union)
print(inter)

#a = list(map(int, input("Enter first list: ").split()))
#b = list(map(int, input("Enter second list: ").split()))

#union = list(set(a + b))
#intersection = list(set(a) & set(b))

#print("Union:", union)
#print("Intersection:", intersection)
