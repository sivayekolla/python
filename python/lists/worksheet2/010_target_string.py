import random
import string

def random_string(length):
    return ''.join(random.choice(string.ascii_lowercase) for _ in range(length))

def generate_until_target(target):
    attempts = 0
    while True:
        attempts += 1
        s = random_string(len(target))
        print(f"Generated: {s}")
        if s == target:
            print(f"Target '{target}' found after {attempts} attempts!")
            break

target = "abc"
generate_until_target(target)
