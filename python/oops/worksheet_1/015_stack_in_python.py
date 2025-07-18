class stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

stack = stack()
stack.push(10)
stack.push(20)
print(stack.pop())
