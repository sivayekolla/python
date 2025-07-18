t = (('item1', '12.20'), ('item2', '15.10'), ('item3', '24.5'))

def get(item):
    return float(item[1])

sorted_t = sorted(t, key=get, reverse=True)

print(tuple(sorted_t))
