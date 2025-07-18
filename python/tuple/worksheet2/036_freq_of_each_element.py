t = (1, 2, 2, 3, 3, 3)

freq = {}

for item in t:
    if item in freq:
        freq[item] += 1
    else:
        freq[item] = 1

print(freq)
