#include <iostream>

class Shape {
    public:
        virtual float getS() = 0;
        virtual float getP() = 0;
};

class Point: public Shape {
    protected:
        float x, y;
    public:
        Point(float x=0, float y=0)
            :x(x)
            ,y(y) {}
        Point(const Point& P)
            :x(P.x)
            ,y(P.y) {}
        ~Point() {}
        void setX(float x) {
            this->x = x;
        }
        float getX() {
            return x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getY() {
            return y;
        }
        void foo() {
            std::cout << "Point!" << std::endl;
        }
        virtual void boo() {
            std::cout << "Virtual Point!" << std::endl;
        }
        virtual float getS() {
            return -1;
        }
        virtual float getP() {
            return -1;
        }
};

class Rectangle: public Point {
    protected:
        Point a;
    public:
        Rectangle(Point a,Point b)
            :Point(b)
            {
            this->a = a;
        }
        Rectangle(const Rectangle& r)
            :a(r.a) {}
        ~Rectangle() {}
        void setA(Point a) {
            this->a = a;
        }
        Point getA() {
            return a;
        }
        float lenght() {
            return a.getX() - Point::getX();
        }
        float hight() {
            return a.getY() - Point::getY();
        }
        void foo() {
            std::cout << "Rectangle!" << std::endl;
        }
        virtual void boo() {
            std::cout << "Virtual Rectangle!" << std::endl;
        }
        virtual float getS() {
            return lenght() * hight();
        }
        virtual float getP() {
            return 2 * (lenght() + hight());
        }
};

        void printS(Shape* obj) {
            std::cout << obj->getS();
        }
        void printP(Shape* obj) {
            std::cout << obj->getP();
        }

int main() {
    //Point
    Point P;
    Point* pr= &P;
    pr->foo();
    pr->boo();
    printS(&P);
    std::cout << std::endl;
    printP(&P);
    std::cout << std::endl;
    std::cout << std::endl;

    //Rectangle
    float a, b, c, d;
    std::cout << "Enter a:";
    std::cin >> a;
    std::cout << "Enter b:";
    std::cin >> b;
    Point p(a, b);
    std::cout << "Enter c:";
    std::cin >> c;
    std::cout << "Enter d:";
    std::cin >> d;
    Point pp(c,d);
    Rectangle R(p,pp);
    Point* r = &R;
    r->foo();
    r->boo();
    printS(&R);
    std::cout << std::endl;
    printP(&R);
    std::cout << std::endl;

    return 0;
}

