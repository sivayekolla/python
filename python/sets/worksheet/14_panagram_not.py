import string
sentence = "The quick brown fox jumps over a lazy dog"
alphabet=set(string.ascii_lowercase)
sentence = set(sentence.lower())
if alphabet<sentence:
    print("panagram",True)
else:
    print("panagram",False)