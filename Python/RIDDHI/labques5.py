list =[]
x = int(input("Enter the length of the list : "))
for i in range(x):
    a = input("Enter the next value : ")
    if a % 2 == 0 :
        list.append(a)
print(list) 
