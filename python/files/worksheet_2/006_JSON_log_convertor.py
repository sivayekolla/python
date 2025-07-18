import json

def parse_log_file(filename):
    parsed_logs = []
    
    with open(filename, "r") as f:
        for line_num, line in enumerate(f, 1):
            line = line.strip()
            
            if not line:
                continue

            try:
                if len(line) < 21:
                    raise ValueError("Too short to be valid")

                timestamp = line[:19]
                remainder = line[20:]

                if not timestamp[0].isdigit():
                    raise ValueError("Missing or malformed timestamp")

                if not remainder.startswith("["):
                    raise ValueError("Missing log level brackets")

                level_end = remainder.find("]")
                if level_end == -1:
                    raise ValueError("Missing closing bracket for log level")

                log_level = remainder[1:level_end]
                after_level = remainder[level_end + 2:]  # skip "] "

                module = None
                message = after_level

                if after_level.startswith("["):
                    mod_end = after_level.find("]")
                    if mod_end == -1:
                        raise ValueError("Malformed module brackets")
                    module = after_level[1:mod_end]
                    message = after_level[mod_end + 2:]  # skip "] "

                if not message:
                    raise ValueError("Empty log message")

                parsed_logs.append({
                    "timestamp": timestamp,
                    "log_level": log_level,
                    "module": module,
                    "message": message
                })

            except Exception as e:
                parsed_logs.append({
                    "error": f"Line {line_num} invalid → {str(e)}",
                    "raw_line": line
                })
    
    return parsed_logs


def convert_json(input_filename, output_filename):
    logs = parse_log_file(input_filename)

    with open(output_filename, "w") as f:
        json.dump(logs, f, indent=4)

    print(f"JSON log file written to {output_filename}")
