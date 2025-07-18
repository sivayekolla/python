
marbles = ["red", "blue", "red", "green", "blue", "red"]
freq={}
for color in marbles:
    if color in freq:
        freq[color]+=1
    else:
        freq[color]=1
max_count=0

for count in freq.values():
    if count>max_count:
        max_count=count
print(max_count)