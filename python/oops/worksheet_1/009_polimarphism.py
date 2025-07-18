class shape:
    def area(self):
        pass

class square(shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side * self.side

sq = square(4)
print(sq.area())
