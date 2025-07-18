friends_colors = [
  ["red", "blue"],
  ["green", "red"],
  ["yellow", "blue"]
]
s=set()
for colors in friends_colors:
    for col in colors:
        s.add(col)
print(s)