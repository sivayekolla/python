a = int(input("enter no of tuple elements : "))
b = int(input("enter no of sub tuple elements : "))
c = []


for i in range(a):
    c.append([])                       
    for j in range(b):
        val = str(input("enter tuple elemnts : "))
        c[i].append(val)


for i in range(a):
    c[i] = tuple(c[i])

for i in range(a):
    for j in range(b):
        print(c[i][j])
