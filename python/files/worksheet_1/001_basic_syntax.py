import re

with open('myfile.txt', 'r') as file:
    text = file.read().lower()

text = re.sub(r'\W+', ' ', text)

words = text.split()

word_counts = {}

for word in words:
    word_counts[word] = word_counts.get(word, 0) + 1

print(word_counts)
