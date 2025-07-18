def febi(k):
    if k == 0:
        return 0
    elif k == 1:
        return 1
    else:
        return febi(k - 1) + febi(k - 2)

a = int(input("Enter the position (n) to get nth Fibonacci number: "))
print(f"{a}th Fibonacci number is: {febi(a)}")
