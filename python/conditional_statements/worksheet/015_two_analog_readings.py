a,b=map(int,input("enter 2 values:").split())
if(a>b):
    c= "match" if((a-b)==5) else "no match"
    print(c)
else :
     d="match" if((b-a)==5) else "no match"
     print(d)
