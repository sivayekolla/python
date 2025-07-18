def intro(name,country="india"):
     print(f"my name is {name} and i am from{country}")
a=input("enter name and country : ").split()
if(len(a)==1):
     intro(a[0])
else:
     intro(a[0],a[1])
