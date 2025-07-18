a=float(input("enter  voltage : "))
b=int(input("enter current : "))
c= 1 if a>=3.0 and a<=3.3 else 0
d= 1 if a>=10 and a<=500 else 0
print("power error") if(c==0 and d==0) else print("voltage error")if(c==0) else  print("current error")if(d==0) else ""

