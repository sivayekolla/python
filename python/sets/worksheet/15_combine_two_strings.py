import string
A = {"abcdefghrst", "defg", "xyz"}
B = {"ijklmnopquvwxyz", "rstuv", "wxyz"}
alphabets=set(string.ascii_lowercase)
for word1 in A:
    flag=0
    for word2 in B:
        str=word1+word2
        if alphabets>set(str):
            pass
        else:
            print(word1+word2)
            flag=1
            break
    if flag==1:
        break
if flag==0:
    print("no match")        

    
    