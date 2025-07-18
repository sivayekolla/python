fruits=list(input("enter list of elements").split())
b=len(fruits)
fruits.insert(1,"mango")
if "apple" in fruits:
     fruits.remove("apple")
print(fruits)
fruits.clear()


              