a=int(input("enter a value :"))
b= "info" if a<100 else "warning" if a>= 100 and a<= 999 else "critical"
print(b)