lst=input("enter values:").split()
d={}
for ch in lst:
    for i in range(1,int(ch)+1):
        if int(ch)%i==0:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
print(d)