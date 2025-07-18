import random

def random_binary_string(length):
    return ''.join(random.choice('01') for _ in range(length))
print(random_binary_string(8))
