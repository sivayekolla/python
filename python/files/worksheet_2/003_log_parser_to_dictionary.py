def parse_log_file(filename):
    """
    Parses a log file into dictionaries with:
    timestamp, log_level, module, message
    Returns:
        list of parsed log dictionaries
    """
    parsed_logs = []
    
    with open(filename, "r") as f:
        for line_num, line in enumerate(f, 1):
            line = line.strip()
            
            if not line:
                continue 
            
            parts = line.split(" ", 2)
            
            if len(parts) < 3:
                parsed_logs.append({
                    "error": f"Line {line_num} malformed or incomplete: {line}"
                })
                continue
            
            timestamp, level_part, remainder = parts
            
            if not (level_part.startswith("[") and level_part.endswith("]")):
                parsed_logs.append({
                    "error": f"Line {line_num} missing log level brackets: {line}"
                })
                continue
            
            log_level = level_part[1:-1]
            
            module = None
            message = remainder
            
            if remainder.startswith("["):
                close_idx = remainder.find("]")
                if close_idx != -1:
                    module = remainder[1:close_idx]
                    message = remainder[close_idx+2:]  
                else:
                    
                    parsed_logs.append({
                        "error": f"Line {line_num} has malformed module info: {line}"
                    })
                    continue

            parsed_logs.append({
                "timestamp": timestamp,
                "log_level": log_level,
                "module": module,
                "message": message
            })
    
    return parsed_logs
