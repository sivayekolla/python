num1,num2=map(int,input("enter num1,num2:").split())
num1=bin(num1)[2:]
num2=bin(num2)[2:]
cnt_num1_0=num1.count('0')
cnt_num1_1=num1.count('1')
cnt_num2_0=num2.count('0')
cnt_num2_1=num2.count('1')
if cnt_num1_0==cnt_num2_0 and cnt_num1_1==cnt_num2_1:
    print("anagrams",True)
else:
    print("anagrams:",False)
