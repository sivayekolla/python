final=[]
a=int(input("enter a no of values :"))
b=int(input("enter no of sub tuples : "))
for i in range(a):
     m=[]
     for j in range(b):
          k=int(input())
          m.append(k)
     m=tuple(m)
     final.append(m)
final_p1=[]
for i in range(a):
     if  len(final[i])!=0:
          final_p1.append(final[i])
print(final_p1)