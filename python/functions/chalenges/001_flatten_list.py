def deep_sum(lst):
    total = 0
    for item in lst:
        if isinstance(item, int):
            total += item
        elif isinstance(item, list):
            total += deep_sum(item)
    return total


a=[1,[2,[3,4],5],6]
print(deep_sum(a))