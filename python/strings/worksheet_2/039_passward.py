import re

def is_valid_password(pwd):
    if len(pwd) < 8:
        return False
    if not re.search(r"[A-Z]", pwd):
        return False
    if not re.search(r"[a-z]", pwd):
        return False
    if not re.search(r"\d", pwd):
        return False
    if not re.search(r"[!@#$%^&*(),.?\":{}|<>]", pwd):
        return False
    return True

pwd = "MyPass123@"
print("Valid password:", "Yes" if is_valid_password(pwd) else "No")
