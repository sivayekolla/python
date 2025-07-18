a,b,c=map(int,input("enter 3 value of lights are on or off").split())
print("all are on") if(a&b&c) else ""
print("1st led is on")if(a==1 and b==0 and c==0) else  ""
print("2nd led is on")if(a==0 and c==0 and b==1) else ""
print("3rd led is on")if(a==0 and b==0 and c==1) else ""
print("all leds are off") if(a==0 and b==0 and c==0) else ""