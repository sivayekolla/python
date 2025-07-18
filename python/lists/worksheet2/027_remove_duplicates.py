#27
a = list(map(int, input("enter a list : ").split()))
i = 0
while i < len(a):
    if a.index(a[i]) != i:
        a.pop(i)
    else:
        i += 1
print(a)
