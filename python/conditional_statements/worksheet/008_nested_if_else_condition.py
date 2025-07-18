a=int(input("enter a value :"))
b= "0-63" if a<=63 and a>=0 else "64-127" if a<=127 and a>=64 else "128-191" if a<=191 and a>=128 else "192 -225"
print(b)