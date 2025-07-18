
from log_parser import parse_log_line, validate_parsing

def test_parse_log_line():
    log_line = "2025-07-08 10:24:01 [ERROR] Unable to connect to database"
    
    expected = {
        'timestamp': "2025-07-08 10:24:01",
        'severity': "ERROR",
        'message': "Unable to connect to database"
    }
    
    parsed = parse_log_line(log_line)
    
    assert validate_parsing(parsed, expected), f"Test failed: {parsed} {expected}"
    print("Test passed!")

test_parse_log_line()
