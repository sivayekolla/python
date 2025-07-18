a=list(map(str,input("enter a string : ").split()))
res=""
for i in range(len(a)):
     if a[i] =="apples":
          a[i]="orenges"
          continue
     elif a[i]=="bananas":
          a[i]="grapes"
for word in a:
    res=res+word+" "
print(res)