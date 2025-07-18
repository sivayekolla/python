def validate_log_format(filename):
    with open(filename, "r") as f:
        for line_num, line in enumerate(f, 1):
            try:
                line = line.strip()
                
                if not line:
                    continue  

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
                if log_level not in ["INFO", "ERROR", "WARNING", "DEBUG"]:
                    raise ValueError(f"Unknown log level: {log_level}")

                after_level = remainder[level_end + 2:] 

                if after_level.startswith("["):
                    mod_end = after_level.find("]")
                    if mod_end == -1:
                        raise ValueError("Malformed module brackets")
                    module = after_level[1:mod_end]
                    message = after_level[mod_end + 2:] 
                else:
                    module = None
                    message = after_level

                if not message:
                    raise ValueError("Empty log message")

                print(f"Line {line_num}: OK")

            except Exception as e:
                print(f"Warning: Line {line_num} is invalid → {e}")
