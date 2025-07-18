def extract_error_logs(filename):
    errors = []

    with open(filename, "r") as f:
        for line in f:
            line = line.strip()

            if not line:
                continue 

            parts = line.split(" ", 2) 
            if len(parts) < 3:
                continue 

            timestamp, level_part, message = parts

            if not timestamp[0].isdigit():
                continue

            if not (level_part.startswith("[") and level_part.endswith("]")):
                continue

            level = level_part[1:-1]

            if level == "ERROR":
                errors.append(line)

    return errors
