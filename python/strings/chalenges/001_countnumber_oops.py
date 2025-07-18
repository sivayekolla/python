def count(log):
    panic = log.lower().count("kernel panic")
    oops = log.lower().count("oops")
    print(f"Kernel panic count: {panic}")
    print(f"Oops count: {oops}")


log = """
[12345.67] kernel panic - not syncing: Fatal exception
[12345.89] Oops: 0002 [#1] SMP
[12346.00] kernel panic - not syncing: Fatal exception
[12346.13] Oops: 0003 [#2] SMP
"""

count(log)
