s=input("enter string:")
d=[]
for i in range(len(s)):
    for j in range(i+1,len(s)+1):
        d.append(s[i:j])
print(d)
print(len(d))