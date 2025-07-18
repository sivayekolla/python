def arr(arr1):
     a=list(arr1)
     result=[]
     for i in range(len(a)):
          if a[i] not in result:
               result.append(a[i])
     return "".join(result)
a=str(input("enter a value : "))
print(arr(a))