a=int(input("enter no of dict elememts : "))
my_dict={}
for i in range(a):
     key=int(input("enter integer :"))
     value=str(input("enter strings :"))
     my_dict[key]=value
inti=[]
strg=[]
for key,value in my_dict.items():
     inti.append(key)
     strg.append(value)
print(inti)
print(strg)
