def groups(words):
    anagram_dict={}
    for word in words:
        key = ''.join (sorted(word))
        if key not in anagram_dict:
            anagram_dict[key]=[]
        anagram_dict[key].append(word)
    return list(anagram_dict.values()) 
words = ['listen', 'silent', 'enlist', 'hello', 'ohlle']
result=groups(words)
print(result)