import itertools
def val(str1):
     val=[]
     val=[''.join(p) for p in itertools.permutations(str1)]
     print(val)
a=str(input("enter a string : "))
val(a)