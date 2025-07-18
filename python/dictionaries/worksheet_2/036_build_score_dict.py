students = ['A', 'B','c']
subjects = ['math', 'sci']
scores = [[90, 80], [85, 95],[56,99]]
result={}
for i, std in enumerate(students):
    result[std] = {}
    for j, sub in enumerate(subjects):
        result[std][sub] = scores[i][j]

print(result)