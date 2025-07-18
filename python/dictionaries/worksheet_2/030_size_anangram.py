words = ['bat', 'tab', 'eat', 'tea', 'tan', 'nat']
max=0
size=0
for word in words:
    size=len(word)
    if(size>max):
        max=size
print(max)