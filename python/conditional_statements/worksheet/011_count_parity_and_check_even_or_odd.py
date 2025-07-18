value = int(input("Enter a 16-bit value (e.g., 0xAAAA): "), 16)


count = bin(value).count('1')


parity = "Even" if count % 2 == 0 else "Odd"
print("Parity:", parity)
