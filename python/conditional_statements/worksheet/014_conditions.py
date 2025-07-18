a=int(input("enter a value :"))
b= "standby" if a==0 else  "active" if a==1 else "fault" if a==2 else "unknown"


print(b)