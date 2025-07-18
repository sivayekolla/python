num_final=[]
final=[]
a=int(input("enter a num of tuple elements :"))
b=int(input("enter no of sub elements in tuple :"))
for i in range(a):
     num=[]
     for j in range(b):
          k=int(input())
          num.append(k)
     num=tuple(num)
     num_final.append(num)
for i in range(a):
     red=1
     for j in range(b):
          if num_final[i][j] <= 0:
               red=0
     if(red):
          final.append(num_final[i])
print(final)

