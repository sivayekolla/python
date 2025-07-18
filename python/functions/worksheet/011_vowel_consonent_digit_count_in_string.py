def find(a,b):
     digit=0
     vowel=0
     consonent=0
     for i in range(0,b):
          if(a[i]=='1' or a[i]=='2' or a[i]=='3' 
             or a[i]=='4' or a[i]=='5' or a[i]=='6' or
          a[i]=='7' or a[i]=='8' or a[i]=='9' ):
               digit+=1
               continue
          if(a[i]=='A' or a[i]=='A' or a[i]=='E' or 
             a[i]=='I' or a[i]=='U' or a[i]=='O' or 
             a[i]=='a' or a[i]=='e' or a[i]=='i' or 
             a[i]=='o' or a[i]=='u' ):
               vowel+=1
          else:
               consonent+=1
         
     return(vowel,consonent,digit)
a=str(input("enter a string : "))
print(find(a,len(a)))