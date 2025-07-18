a=int(input("enter no of tuple elements : "))
b=int(input("enter no of values in each tuple elements : "))
c=int(input("enter minimum no of values in each tuple elements : "))
mal=[]
k=[]
for i in range(a):
     mal_1=[]
     for j in range(b):
          g=int(input())
          mal_1.append(g)
     mal_1=tuple(mal_1)
     mal.append(mal_1)
mal=tuple(mal)
l=0
for i in range(a):
     if len(mal[i])>c:
          l+=1
          k.append(mal[i])
print(k)
