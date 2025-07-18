a=int(input("enter a value :"))
b= "low band" if a<1000 else "mid band" if a>=1000 and a<= 9999 else "high band" if a>=10000 and a<99999 else " "
print(b)