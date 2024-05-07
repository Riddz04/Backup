class Fibonacci:
    def __init__(self):
        self.x = 0
        self.y = 1
    def next(self):
        result = self.y
        self.y,self.x = self.y+self.x,self.y
        return result
fib = Fibonacci()
n = int(input("enter the length for fibonacci sequence : "))
if n == 1:
    print(0)
else:
    print(0)
for i in range(1,n):
    print(fib.next())