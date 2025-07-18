def count_log_levels(filename):
    levels = ["INFO", "ERROR", "WARNING", "DEBUG"]
    count = {level: 0 for level in levels}

    with open(filename, "r") as f:
        for line in f:
            line = line.strip()
            if '[' in line and ']' in line:
                try:
                    start = line.index('[') + 1
                    end = line.index(']')
                    level = line[start:end]

                    if level in count:
                        count[level] += 1
                except ValueError:
                    continue  
            else:
                continue  
    return count
