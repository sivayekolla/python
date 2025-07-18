def arr(a):
     a1=list(a)
     h=len(a1)
     count=0
     result=[]
     max=-1
     for i in range(h):
          for j in range(h):
               if(i != j):
                    if(a1[i]==a1[j]):
                         count+=1
          if(count>max):
               max=count
               result[1]=a1[i]
               result[0]=max
          count=0
     return result
a=str(input("enter a string : "))
print(arr(a))