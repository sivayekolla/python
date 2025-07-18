a=float(input("enter a value :"))
b= "low temp" if a<25 else "normal" if a>= 25 and a<= 75 else "over heat"
print(b)