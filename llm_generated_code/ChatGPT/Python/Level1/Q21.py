def remove_wub(string):
    return ' '.join(string.replace("WUB", " ").split())

input_string = input()
output_string = remove_wub(input_string)
print(output_string)
