a=list(map(str,input("enter list of strings : ").split()))
b=list(map(str,input("enter another list of strings : ").split()))
common=[]
for i in range(len(a)):
     if a[i] not in b and a[i] not in common:
          common.append(a[i])
print(common)
