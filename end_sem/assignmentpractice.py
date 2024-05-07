import re
def word(input_string):
    pattern = r'\b[ae]\w*'
    matches = re.findall(pattern,input_string)
    return matches
input_string = "apple,eagle,banana,accomplish,eat,cat,dog"
x = word(input_string)
print(x)