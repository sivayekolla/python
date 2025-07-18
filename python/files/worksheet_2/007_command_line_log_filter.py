import argparse

VALID_LEVELS = {"INFO", "ERROR", "WARNING", "DEBUG"}

def parse_args():
    parser = argparse.ArgumentParser(
        description="Filter logs by log level and module."
    )
    parser.add_argument(
        "log_level",
        help="The log level to filter for (e.g., INFO, WARNING, ERROR, DEBUG)"
    )
    parser.add_argument(
        "module",
        help="The module name to filter for (e.g., db, auth, etc.)"
    )
    parser.add_argument(
        "-f", "--file",
        default="app.log",
        help="Path to the log file (default: app.log)"
    )
    return parser.parse_args()


def parse_log_file(filename):
    logs = []
    with open(filename, "r") as f:
        for line_num, line in enumerate(f, 1):
            line = line.strip()
            
            if not line:
                continue

            try:
                if len(line) < 21:
                    raise ValueError("Too short")

                timestamp = line[:19]
                remainder = line[20:]

                if not timestamp[0].isdigit():
                    raise ValueError("Bad timestamp")

                if not remainder.startswith("["):
                    raise ValueError("Missing level brackets")

                level_end = remainder.find("]")
                if level_end == -1:
                    raise ValueError("Missing closing bracket")

                log_level = remainder[1:level_end]
                after_level = remainder[level_end + 2:]

                module = None
                message = after_level

                if after_level.startswith("["):
                    mod_end = after_level.find("]")
                    if mod_end == -1:
                        raise ValueError("Malformed module brackets")
                    module = after_level[1:mod_end]
                    message = after_level[mod_end + 2:]

                if not message:
                    raise ValueError("Empty message")

                logs.append({
                    "timestamp": timestamp,
                    "log_level": log_level,
                    "module": module,
                    "message": message
                })

            except Exception:
                continue

    return logs


def main():
    args = parse_args()

    if args.log_level not in VALID_LEVELS:
        print(f" Invalid log level: {args.log_level}")
        print(f"Valid levels are: {', '.join(VALID_LEVELS)}")
        exit(1)

    logs = parse_log_file(args.file)

    filtered = [
        log for log in logs
        if log["log_level"] == args.log_level and log["module"] == args.module
    ]

    if not filtered:
        print("No matching logs found.")
    else:
        for log in filtered:
            print(f"{log['timestamp']} [{log['log_level']}] [{log['module']}] {log['message']}")


if __name__ == "__main__":
    main()
