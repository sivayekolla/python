#20
a=list(map(int,input("enter row and column : ").split()))
mat1=[]
for i in range(a[0]):
     mat=[]
     for j in range(a[1]):
          mat.append(i)
     mat1.append(mat)
print(a)