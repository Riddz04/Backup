import re
text = "Hello people!,This is Riddhi Dhawan."
pattern = r'people'
matches = re.findall(pattern,text)
new = re.sub(pattern,'python',text)
print(matches)
print(new)