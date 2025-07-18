stock = {'apples': 14, 'bananas': 22, 'rice': 12}
query=str(input("enter a item : "))
if query in stock:
     if stock[query]>0:
          print("yes,avilable")
else:
     print("not avilable ")
