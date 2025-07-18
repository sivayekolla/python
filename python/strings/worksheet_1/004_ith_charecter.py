def ele(a,b):
     a=list(a)
     temp=a
     v=len(a)
     k=(v-b)
     for i in range(0,v):
          if(i==b):
               for j in range(0,k-1):
                    a[b+j]=a[b+j+1]
               a.pop()
          else:
               continue
     return ''.join(a)

a=str(input("enter a string : "))
b=int(input("enter a position to remove in string"))
print(ele(a,b))