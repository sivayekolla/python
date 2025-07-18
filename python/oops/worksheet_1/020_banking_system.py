class bankaccount:
    def __init__(self, balance):
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount

    def show_balance(self):
        return self.balance

account = bankaccount(1000)
account.deposit(500)
account.withdraw(300)
print(account.show_balance())
