def restore(s):
    res = []
    n = len(s)
    
    for i in range(1, 4):
        for j in range(i+1, i+4):
            for k in range(j+1, j+4):
                if k >= n:
                    continue
                p1, p2, p3, p4 = s[:i], s[i:j], s[j:k], s[k:]
                if all(is_valid(p) for p in [p1, p2, p3, p4]):
                    res.append(f"{p1}.{p2}.{p3}.{p4}")
    return res

def is_valid(part):
    return part != "" and (part == "0" or (part[0] != "0" and int(part) <= 255))

s = "25525511135"
print(restore(s))
