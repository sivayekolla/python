def min_max(a,b):
    
     min=a[0]
     max=a[0]
     for i in range(1,b):
          for j in range(1,b):
               if(min>a[j]):
                    min=a[j]
     for i in range(1,b):
          for j in range(1,b):
               if(max<a[j]):
                    max=a[j]
   
     return [min,max] 
a=list(map(int,input("enter a value : ").split()))
print(min_max(a,len(a)))