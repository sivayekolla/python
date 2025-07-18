a,b,c=map(int,input("enter 3 values").split())
d= "majority high" if a>50 or b>50 and b>50 or c>50 and a>50 and c>50 else "majority low"
print(d)