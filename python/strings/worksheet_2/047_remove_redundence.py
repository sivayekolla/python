def remove(lst):
    result = []
    for s in lst:
        n = len(s)
        found = False
        for i in range(1, n // 2 + 1):
            if n % i == 0:
                sub = s[:i]
                if sub * (n // i) == s:
                    result.append(sub)
                    found = True
                    break
        if not found:
            result.append(s)
    return result

data = ["hellohello", "world", "testtesttest"]
print(remove(data))
