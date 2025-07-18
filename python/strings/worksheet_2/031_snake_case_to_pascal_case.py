def snake(snake_str):
    words = snake_str.split('_') 

    capitalwords = []
    for word in words:
        capitalwords.append(word.capitalize())  
    pascal_case = ''.join(capitalwords)

    return pascal_case

input_string = "my_variable_name"
output = snake(input_string)
print("PascalCase:", output)
