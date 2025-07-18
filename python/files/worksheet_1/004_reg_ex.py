import re
def extract_phone_numbers(text):
    pattern = r"\b\d{3}[-.]?\d{3}[-.]?\d{4}\b"
    return re.findall(pattern, text)

text = "Call 123-456-7890 or 987.654.3210."
print(extract_phone_numbers(text))
