salaries = {'A': 20000, 'B': 30000}
for values in salaries:
     x=salaries[values]//10
     salaries[values]=float(x+salaries[values])
print(salaries)