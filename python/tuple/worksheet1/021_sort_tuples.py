lst = []
n = int(input("Enter number of tuples: "))
for i in range(n):
    name = input("Enter name: ")
    age = int(input("Enter age: "))
    lst.append((name, age))

lst.sort(key=lambda x: x[1])

print(lst)
