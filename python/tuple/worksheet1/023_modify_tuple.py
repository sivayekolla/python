lst = []
n = int(input("Enter number of tuples: "))
for i in range(n):
    tup = tuple(map(int, input("Enter tuple elements separated by space: ").split()))
    lst.append(tup)

new_value = int(input("Enter new value for last element: "))

new_lst = []
for t in lst:
    t = t[:-1] + (new_value,)
    new_lst.append(t)

print(new_lst)
