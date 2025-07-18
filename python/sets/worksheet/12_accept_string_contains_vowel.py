words = ["education", "python", "sequoia"]
s={'a','e','i','o','u'}
lst=[]
for word in words:
    flag=1
    for ch in s:
        if ch not in word:
            flag=0
    if flag==1:
        lst.append(word)
print(lst)
