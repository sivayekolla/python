import json

with open("users.json", "r") as f:
    json_data = json.load(f)

assert len(json_data) == 3

expected_first_row = {
    "id": "1",
    "name": "Alice",
    "email": "alice@example.com"
}

assert json_data[0] == expected_first_row, f"Validation failed! Got: {json_data[0]}"

print("Validation passed. JSON matches CSV content.")
