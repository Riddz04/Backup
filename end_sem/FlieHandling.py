f = open('mydata','r')
#print(f.read())
f1 = open('abc','w')
f1.write('helololoooo')
"""f2 = open('abc','a')
f2.write(" How u doin???")"""
for data in f:
    f1.write(data)