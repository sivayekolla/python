lst=input("enter list:").split()
d={}
for ch in lst:
    num=int(ch)
    cnt=0
    sum=0
    while num!=0:
        rem=num%10
        sum+=rem
        num=num//10
    if sum not in d:
        d[sum]=1
    else:
        d[sum]+=1
print(len(d))