def extract_warnings(log):
    lines = log.strip().split('\n')
    for line in lines:
        if "warning" in line.lower():
            print(line)


log = """
[100.123] INFO: Booting Linux
[100.456] WARNING: Low memory detected
[101.000] WARNING: CPU load high
[101.555] INFO: Boot complete
"""

extract_warnings(log)
