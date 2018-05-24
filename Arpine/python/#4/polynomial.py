class Polynomial():
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    
    def __str__(self):
        return str(self.a)+"x^2 + "+str(self.b)+"x + "+str(self.c)+" = 0"

    def solution(self, a, b, c):
        x1 = (-self.b + (b**2 - 4*self.a*self.c)**0.5)/2*a
        x2 = (-self.b - (b**2 - 4*self.a*self.c)**0.5)/2*a
        return "x1 = "+str(x1)+"\nx2 = "+str(x2)

    def value(self, x):
        val = self.a*x*x + self.b*x + self.c
        return val

    def __add__(self, other):
        a = self.a + other.a
        b = self.b + other.b
        c = self.c + other.c
        return Polynomial(a, b, c)

    def __sub__(self, other):
        a = self.a - other.a
        b = self.b - other.b
        c = self.c - other.c
        return Polynomial(a, b, c)

    def __mul__(self, other):
        a = self.a * other.a
        b = self.a * other.b + self.b * other.a
        c = self.a * other.c + self.b * other.b + self.c * other.a
        d = self.b * other.c + self.c * other.b
        e = self.c * other.c
        return str(a)+"x^4 + "+str(b)+"x^3 + "+ str(Polynomial(c, d, e))
    
p1 = Polynomial(3, 5, 9)
p2 = Polynomial(4, 2, 5)
print("Plynomial1:", p1)
print("Plynomial2:", p2)
print("Plynomial1 value:", p1.value(3))
print("Addition:", p1+p2)
print("Subtraction:", p1-p2)
print("Multiplication:", p1*p2)
