names = ['Alice', 'Bob', 'Eve']
seats = [5, 12, 8]
c={}
for seat in range(len(seats)):
     c[names[seat]]=seats[seat]
print(c)
