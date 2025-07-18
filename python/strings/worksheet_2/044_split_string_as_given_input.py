a = str(input("enter a string : "))
b = int(input("enter no of slices : "))
res = []

ln = len(a) // b

for i in range(ln):
    st = a[i * b : (i + 1) * b]
    res.append(st)

print(res)
