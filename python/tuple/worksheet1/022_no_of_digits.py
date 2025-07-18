lst = []
n = int(input("Enter number of tuples: "))
for i in range(n):
    tup = tuple(map(int, input("Enter tuple elements separated by space: ").split()))
    lst.append(tup)

def digit_count(tup):
    total = 0
    for item in tup:
        total += len(str(abs(item)))
    return total

lst.sort(key=digit_count)

print(lst)
