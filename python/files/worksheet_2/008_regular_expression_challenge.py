import re

def extract_unique_ips(filename):
    ip_pattern = re.compile(
        r'\b'
        r'(?:'
            r'(?:25[0-5])|'
            r'(?:2[0-4][0-9])|'
            r'(?:1[0-9]{2})|'
            r'(?:[1-9]?[0-9])'
        r')'
        r'(?:\.'
            r'(?:25[0-5])|'
            r'(?:2[0-4][0-9])|'
            r'(?:1[0-9]{2})|'
            r'(?:[1-9]?[0-9])'
        r'){3}'
        r'\b'
    )
    
    unique_ips = set()

    with open(filename, "r") as f:
        for line in f:
            matches = ip_pattern.findall(line)
            unique_ips.update(matches)
    
    return list(unique_ips)
