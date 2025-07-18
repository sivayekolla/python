import itertools

a=list(map(int,input("enter list of integers : ").split()))
value=list(itertools.permutations(a))
print(value)