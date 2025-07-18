def words_to_numbers(text):
    words = {
        "zero": "0", "one": "1", "two": "2", "three": "3",
        "four": "4", "five": "5", "six": "6",
        "seven": "7", "eight": "8", "nine": "9", "ten": "10"
    }
    
    for word, digit in words.items():
        text = text.replace(word, digit)
    return text

s = "I have one apple and two oranges."
print(words_to_numbers(s))
