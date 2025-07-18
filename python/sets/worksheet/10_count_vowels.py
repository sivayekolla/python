string=input("enter string:")
s={'a','e','i','o','u','A','E','I','O','U'}
cnt=0
for ch in string:
    if ch in s:
        cnt+=1
print(cnt)