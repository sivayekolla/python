log_lines = [
    "2025-07-08 10:23:11 [INFO] Server started",
    "2025-07-08 10:24:01 [ERROR] Unable to connect to database",
    "2025-07-08 10:25:45 [WARNING] Low disk space",
    "2025-07-08 10:26:12 [INFO] Connection established",
    "2025-07-08 10:27:10 [ERROR] Disk failure detected"
]

error_messages = [
    line.split("] ", 1)[1]
    for line in log_lines
    if "[ERROR]" in line
]

expected = [
    'Unable to connect to database',
    'Disk failure detected'
]

assert error_messages == expected, f"Validation failed. Got {error_messages}"

print("All tests passed.")
print("Error messages:", error_messages)
