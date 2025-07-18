class shoppingcart:
    def __init__(self):
        self.items = {}

    def add(self, item, qty, price):
        self.items[item] = qty * price

    def total(self):
        return sum(self.items.values())

cart = shoppingcart()
cart.add("Book", 2, 200)
cart.add("Pen", 5, 20)

print(cart.total())