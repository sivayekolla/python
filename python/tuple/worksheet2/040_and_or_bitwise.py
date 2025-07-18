a=tuple(map(int,input("enter tuple_1").split()))
b=tuple(map(int,input("enter tuple_2").split()))
add_=[]
or_=[]
for i in range(len(a)):
     n=a[i] & b[i]
     m=a[i] | b[i]
     add_.append(n)
     or_.append(m)
add_=tuple(add_)
or_=tuple(or_)
print(add_)
print(or_) 