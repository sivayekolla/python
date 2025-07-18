class stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def display(self):
        print(self.items)

s = stack()
s.push(1)
s.push(2)
s.display()
