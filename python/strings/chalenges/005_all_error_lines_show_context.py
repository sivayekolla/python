def highlight(log):
    lines = log.strip().split('\n')
    n = len(lines)

    for i, line in enumerate(lines):
        if "error" in line.lower():
            prev = lines[i - 1] if i > 0 else ""
            next = lines[i + 1] if i < n - 1 else ""
            
            if prev:
                print(prev)
            print(line)
            if next:
                print(next)
            print()  


log = """
[10.00] Starting system
[10.05] Initializing drivers
[10.10] ERROR: Device not found
[10.15] Trying next device
[10.20] ERROR: Timeout waiting for response
[10.25] Reboot recommended
"""

highlight(log)
