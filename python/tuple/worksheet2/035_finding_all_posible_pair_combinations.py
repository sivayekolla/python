import itertools

a = (1, 2)
b = (3, 4)

prod = itertools.product(a, b)

result = list(prod)
print(result)
