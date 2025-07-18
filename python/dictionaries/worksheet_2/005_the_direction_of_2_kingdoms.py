north = {'Winterfell': 1000, 'The Eyrie': 800}
south = {'The Eyrie': 1200, "King's Landing": 2500}
d={}
d=north.copy()
for keys,values in south.items():
     if keys not in d:
          d[keys]=values
print(d)
