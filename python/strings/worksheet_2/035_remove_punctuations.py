a = input("enter a string : ")
result = ""

for ch in a:
    if ch.isalnum():
        result += ch

print(result)
