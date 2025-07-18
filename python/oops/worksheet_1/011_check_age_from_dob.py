from datetime import date

class person:
    def __init__(self, name, birth_date):
        self.name = name
        self.birth_date = birth_date

    def age(self):
        today = date.today()
        age = today.year - self.birth_date.year - (
            (today.month, today.day) < (self.birth_date.month, self.birth_date.day)
        )
        return age

p = person("Alice", date(2000, 5, 25))
print(f"{p.name} is {p.age()} years old.")
