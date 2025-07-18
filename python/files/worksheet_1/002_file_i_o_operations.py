with open('app.log', 'r') as infile:
    lines = infile.readlines()

error_lines = [line for line in lines if "ERROR" in line]

with open('errors_only.log', 'w') as outfile:
    outfile.writelines(error_lines)

with open('errors_only.log', 'r') as check_file:
    for line in check_file:
        if "ERROR" not in line:
            print("Validation failed: Non-ERROR line found.")
            break
    else:
        print("Validation passed: All lines contain 'ERROR'")
