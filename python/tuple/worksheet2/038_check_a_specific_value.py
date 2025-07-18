t = (('Red', 'White', 'Blue'), 
     ('Green', 'Pink', 'Purple'), 
     ('Orange', 'Yellow', 'Lime'))

value = 'White'

found = False

for inner in t:
    if value in inner:
        found = True
        break

print(found)
