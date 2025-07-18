def fl_dict(d, par_key='', sep='_'):
    """
     Flattens a nested dictionary into a single-level dictionary.
     Nested keys are joined with sep (default = '_').
    """
    items = {}
    for k, v in d.items():
        new_key = f"{par_key}{sep}{k}" if par_key else k
        
        if isinstance(v, dict):
            items.update(fl_dict(v, new_key, sep=sep))
        else:
            items[new_key] = v
    return items
nested = {
    "user": {
        "id": 42,
        "name": "Alice",
        "address": {
            "city": "Wonderland",
            "zipcode": "12345"
        }
    },
    "active": True
}
expected = {
    'user_id': 42,
    'user_name': 'Alice',
    'user_address_city': 'Wonderland',
    'user_address_zipcode': '12345',
    'active': True
}
flat = fl_dict(nested)
assert flat == expected, f"Validation failed!\nGot: {flat}\nExpected: {expected}"
print("Validation passed.")
