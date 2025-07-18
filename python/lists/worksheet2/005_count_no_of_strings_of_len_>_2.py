a=list(map(str,input("enter strings to list :").split()))
count=0
for i in range(len(a)):
     if len(a[i]) >= 2:
          count+=1
print(count)