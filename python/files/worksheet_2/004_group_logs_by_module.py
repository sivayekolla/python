def group_logs_by_module(parsed_logs):
    result = {}

    for log in parsed_logs:
        if "error" in log:
            continue

        module = log.get("module")
        module_str = str(module) 
        if module_str in result:
            result[module_str] += 1
        else:
            result[module_str] = 1

    return result
