from collections import Counter

def top(log):
    keywords = ["fail", "error", "timeout", "panic"]
    log1 = log.lower()
    counts = Counter()

    for word in keywords:
        counts[word] = log1.count(word)

    top3 = counts.most(3)

    for word, count in top3:
        print(f"{word}: {count}")


log = """
[1.11] ERROR: device failed to start
[1.12] ERROR: timeout waiting for response
[1.13] WARNING: low battery
[1.14] PANIC: unrecoverable error
[1.15] device fail detected
[1.16] timeout on bus
"""

top(log)
