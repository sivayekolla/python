pets={'Harry': 'owl', 'Ron': 'rat'}
a=str(input("enter a string : "))
if a not in pets:
     print("No record, maybe try another student!")
else:
     print(pets[a])