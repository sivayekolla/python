def rotational(s1, s2):
    return len(s1) == len(s2) and s2 in (s1 + s1)
s1 = "abcde"
s2 = "cdeab"
print("Rotationally equivalent:", "Yes" if rotational(s1, s2) else "No")
