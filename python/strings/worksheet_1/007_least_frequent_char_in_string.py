def arm(str):
     str1=list(str)
     result=[[],[]]
     a=len(str1)
     min=a+1
     c=0
     for i in range(a):
          count=0
          for j in range(a):
               if(str1[i]==str1[j]):
                    count+=1
          if(min>count):
               min=count
               c=str1[i]
     result[0].append(min)
     result[1].append(c)
     return result
a=str(input("enter a string : "))
print(arm(a))