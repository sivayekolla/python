def namyi(a):
     temp=a
     s=len(a)
     count=0
     for i in range(s):
          if(temp[i]=='a' or temp[i]=='e' or 
             temp[i]=='i' or temp[i]=='o' or 
             temp[i]=='u' or temp[i]=='A' 
             or temp[i]=='E' or temp[i]=='I' 
             or temp[i]=='O' or temp[i]=='U'):
               count+=1
     return count
a=str(input("enter a value : "))
print(namyi(a))