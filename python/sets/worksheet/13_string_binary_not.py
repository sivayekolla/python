def check_bin(note):
    s={'0','1'}
    flag=0
    for ch in note:
        if ch not in s:
            flag=1
    print(note,flag==0)
note = "101010"
check_bin(note)
note = "1201"
check_bin(note)
