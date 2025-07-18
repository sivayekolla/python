a=str(input("enter a string : "))
a=list(a)
for i in range(len(a)):
     if a[i]=='.':
          a[i]=','
          continue
     if a[i]==',':
          a[i]='.'
          continue
a="".join(a)
print(a)
