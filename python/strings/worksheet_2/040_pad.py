def pad_string(s, length, pad_char='*'):
    return s.rjust(length, pad_char)


print(pad_string("cat", 6, "*"))  
