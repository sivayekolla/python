class note:
    def __init__(self, title, content):
        self.title = title
        self.content = content

note1 = note("meeting notes", "discuss project")
note2 = note("grocery list", "eggs, milk, bread")

print(note1.title, ":", note1.content)
print(note2.title, ":", note2.content)
