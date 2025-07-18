word1=input("enter string1:")
word2=input("enter string2:")
word3=set(word1)^set(word2)
seen=set()
res=''
for ch in word1+word2:
    if ch in word3 and ch not in seen:
        res+=ch
        seen.add(ch)
print(res)