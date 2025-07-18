class queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        return self.items.pop(0)

q = queue()
q.enqueue(10)
q.enqueue(20)
print(q.dequeue())
