import re
from datetime import datetime

start_time = "2025-07-08 10:24:00"
end_time = "2025-07-08 10:26:30"
keyword_pattern = r"ERROR"

log_pattern = re.compile(r"^(\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}) \[(\w+)\] (.*)$")

start_dt = datetime.strptime(start_time, "%Y-%m-%d %H:%M:%S")
end_dt = datetime.strptime(end_time, "%Y-%m-%d %H:%M:%S")

filtered_logs = []

with open("app.log", "r") as f:
    for line in f:
        line = line.strip()
        if not line:
            continue

        match = log_pattern.match(line)
        if match:
            timestamp_str, severity, message = match.groups()
            
            log_dt = datetime.strptime(timestamp_str, "%Y-%m-%d %H:%M:%S")
            
            if start_dt <= log_dt <= end_dt:
                
                if re.search(keyword_pattern, severity) or re.search(keyword_pattern, message):
                    filtered_logs.append(line)

for log in filtered_logs:
    print(log)
