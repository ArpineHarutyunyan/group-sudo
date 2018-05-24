import math

class Shape(object):
    def __eq__(self, other):
        return self.area() == other.area() and self.circum() == other.circum()

    def __lt__(self, other):
        return (self.area() < other.area() and self.circum() < other.circum())

class Rectangle(Shape):
    def __init__(self, latitude, longitude):
        self.latitude = latitude
        self.longitude = longitude

    def __str__(self):
            return 'sThis is Rectangle which area:' + str(self.area())

    def area(self):
        return self.latitude * self.longitude

    def circum(self):
        return 2 * (self.latitude + self.longitude)

class Square(Rectangle):
    def __init__(self, side):
        Rectangle.__init__(self, side, side)
        self.side = side

    def __str__(self) :
            return 'This is Square which side:' + str(self.side)

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def __str__(self):
        return 'This is Circle which diameteri: ' + str(2 * self.radius)

    def circum(self):
        return 2 * math.pi * self.radius

    def area(self):
        return math.pi * self.radius ** 2

square1 = Square(3)

print(square1.circum())

square2 = Square(4)

print(square1 > square2)

rectangle1 = Rectangle(4, 4)

print(square2 == rectangle1)

circle1 = Circle(5)

print(square1 < circle1)
