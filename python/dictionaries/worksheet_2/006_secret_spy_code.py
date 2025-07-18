codes = {'alpha': 'ok', 'beta': 'wait'}
map={}
new_labels = {'alpha': 'red', 'beta': 'blue'}
for keys,values in new_labels.items():
     map[values]=codes[keys]
print(map)
