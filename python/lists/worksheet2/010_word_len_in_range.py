a = input("enter a list : ").split()  
b = int(input("enter no of characters required : "))
for i in range(len(a)):
    c = len(a[i])
    if c > b:
        print(a[i])
