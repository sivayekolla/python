from itertools import combinations 
kids = {"Amy", "Bob", "Cara", "Dan", "Eva"}
size = 3
teams = list(combinations(kids,size))
print(len(teams))
for team in teams:
    print(team)