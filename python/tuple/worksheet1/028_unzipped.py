a=[]
b=int(input("enter no of tuple elements :"))
c=int(input("enter no elements in exach tuple element :"))
for i in range(b):
     man=[]
     for j in range(c):
          f=(input())
          if f.isdigit():
               f=int(f)
          man.append(f)
     man=tuple(man)
     a.append(man)
num=[]
alpha=[]
for i in range(b):
     for j in range(c):
          if j%2==0:
               num.append(a[i][j])
          else:
               alpha.append(a[i][j])
print(num)
print(alpha)
         
          
