first=set(input("enter first set:").split())
second=set(input("enter second set:").split())
missing=first.difference(second)
addition=second.difference(first)
print(missing)
print(addition)