def unique(t):
    seen = set()
    result = []
    for item in t:
        if item not in seen:
            seen.add(item)
            result.append(item)
    return tuple(result)

t = (1, 2, 2, 3, 1, 4)
print(unique(t))
