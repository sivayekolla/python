a = ["Toy Story", "Frozen", "Moana"]
b = ["Moana", "Coco", "Frozen"]
c = ["Frozen", "Moana", "Up"]
common=set(a).intersection(b)
common=common.intersection(c)
print(common)