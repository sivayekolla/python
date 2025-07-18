a = list(map(int, input("enter a list : ").split()))
b = len(a)
c = a[0]
for i in range(b):
     if a[i] < c:
          c = a[i]
print(c)