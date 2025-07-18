s = "python"

n = len(s)
mid = n // 2

if n % 2 == 0:
    
    middle_chars = s[mid-1 : mid+1]
else:
    
    middle_chars = s[mid]

print(f"Middle character(s): '{middle_chars}'")
