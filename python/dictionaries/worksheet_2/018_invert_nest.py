d={'math':{'john':90,'jane':80},'science':{'john':85,'jane':95}}
result={}
for sub,stud in d.items():
    for name,values in stud.items():
        if name not in result:
            result[name]={}
        result[name][sub]=values
print(result)