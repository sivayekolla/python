a=int(input("enter no of sub tuples : "))
b=int(input("enter elements in sub tuples : "))
c=[]
for i in range (a):
     row=[]
     for j in range(b):
          v=int(input())
          row.append(v)
     c.append(row)
d=[]
for i in range (a):
     for j in range(b):
          d.append(c[i][j])
d=tuple(d)
print(d)
