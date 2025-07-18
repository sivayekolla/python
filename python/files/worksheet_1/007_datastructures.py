log_lines = [
    "2025-07-08 10:23:11 [INFO] Server started",
    "2025-07-08 10:24:01 [ERROR] Unable to connect to database",
    "2025-07-08 10:25:45 [WARNING] Low disk space",
    "2025-07-08 10:26:12 [INFO] Connection established",
    "2025-07-08 10:27:10 [ERROR] Disk failure detected"
]

severity_dict = {}

for line in log_lines:
    start = line.find("[")
    end = line.find("]")
    
    if start != -1 and end != -1:
        sev = line[start+1:end]
        
        if sev not in severity_dict:
            severity_dict[sev] = []
        
        severity_dict[sev].append(line)

for severity, logs in severity_dict.items():
    print(f"{severity}: {len(logs)} entries")
    for log in logs:
        print("   ", log)
    print("-" * 40)
