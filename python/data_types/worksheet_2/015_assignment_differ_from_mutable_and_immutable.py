#Immutable objects: Cannot be changed after creation.
# int, float, str, tuple

#Mutable objects: Can be changed after creation.
# list, dict, set

#immutable
a = 10
b = a      
b = 20    

print(a)   
print(b)   

#mutable
a = [1, 2, 3]
b = a      
b.append(4)

print(a)   
print(b)  