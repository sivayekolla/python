from collections import Counter
a=list(map(str,input("enter a string : ").split()))
freq=Counter(a)
print(freq)