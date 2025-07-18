d = {'x': 100, 'y': 200}
value = 200

key_for_value = next((k for k, v in d.items() if v == value), None)

print(f"Key for value {value}: '{key_for_value}'")