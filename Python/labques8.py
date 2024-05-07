class Shape:
    def __init__(self, color):
        self.color = color

    def area(self):
        pass

class Circle(Shape):
    def __init__(self, color, radius):
        Shape.__init__(self, color)
        self.radius = radius

    def area(self):
        return 3.14 * self.radius ** 2

class Rectangle(Shape):
    def __init__(self, color, width, height):
        Shape.__init__(self, color)
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

circle = Circle("Red", 5)
rectangle = Rectangle("Blue", 4, 6)

print(f"The area of the {circle.color} circle with radius {circle.radius} is {circle.area()}")
print(f"The area of the {rectangle.color} rectangle with width {rectangle.width} and height {rectangle.height} is {rectangle.area()}")
