import string

def is_pangram(s):
    letters = set(s.lower())
    return set(string.ascii_lowercase).issubset(letters)

txt = "The quick brown fox jumps over the lazy dog"
print("Is pangram:", "Yes" if is_pangram(txt) else "No")
