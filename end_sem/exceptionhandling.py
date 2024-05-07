a = 5
b = 0

try:
    print("resource open")
    print(a/b)

except Exception as e:
    print("You cannot divide a number by 0",e)

finally:
    print("resource closed")