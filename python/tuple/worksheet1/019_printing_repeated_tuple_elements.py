a=tuple(map(str,input("entera tuple  : ").split()))
temp=()
temp=list(temp)
c=0
for i in range(len(a)):
     for j in range((len(a))):
          if i != j:
               if a[i] == a[j] and a[i] not in temp:
                    temp.append(a[i])
print(temp)