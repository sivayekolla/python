original={'a':[1,2],'b':[3,4]}
s_cop=original.copy()
s_cop['a']=[1,2,3,4]
print("shallow copy:")
print("original",original)
print("s_copy",s_cop)

print("deep copy:")
d_cop=original
d_cop['a']=[1,2,3,4]
print("original",original)
print("d_copy",d_cop)