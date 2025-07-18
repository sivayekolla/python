a=list(map(int,input("enter a values : ").split()))
c=int(input("enter a num 'index' : "))
b=set(a)
b=sorted(b,reverse=False)
print(b[c-1])

