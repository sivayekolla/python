final=[]
final_sum=[]
a=int(input("enter no of tuple values :"))
b=int(input("enter no on sub elements in tuple : "))
for i in range(a):
     man=[]
     for j in range(b):
          val=int(input())
          man.append(val)
     man=tuple(man)
     final.append(man)
for i in range(a):
     sum=0
     for j in range(b):
          sum+=final[i][j]
     final_sum.append(sum)
print(final_sum)