def arr(a,b):     
     d=(b//2)
     count=0
     for i in range(0,d):
          if(a[i] == a[b-i-1]):
               count+=1
     if(count==d):
          return 1
     else:
          return 0
a=str(input("enter a value : "))
if(arr(a,len(a))):
     print("its a palindrome")
else:
     print("its not a palindrome")
          
          
          
