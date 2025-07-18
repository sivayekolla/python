a=list(map(str,input("enter strings :").split()))
b=list(map(int,input("enter numbers :").split()))
my_dict={}
for i in range(len(a)):
     key=a[i]
     value=b[i]
     my_dict[key]=value
print(my_dict)
