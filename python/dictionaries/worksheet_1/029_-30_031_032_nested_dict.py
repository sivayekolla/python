student={'Rahul':{'age':20,'marks':{'math':85,'english':90}},
         'simran':{'age':15,'marks':{'math':95,'english':92}}}
print(student)

print("rahul english marks:",student['Rahul']['marks']['english'])
for name,info in student.items():
    print(f"student:{name}")
    for subject,mark in info['marks'].items():
        print(f"{subject}:{mark}")

student['simran']['marks']['science']=93
print(student)
