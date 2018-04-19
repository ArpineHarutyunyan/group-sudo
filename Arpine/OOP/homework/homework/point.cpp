#include <iostream>
#include <cmath>

class Point {
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
        void foo() { std::cout << " POINT " << std::endl; }
};

class Triangle: public Point {
    private:
        float a, b, c;
    public:
        Triangle(float a=0, float b=0, float c=0)
            :a(a)
            ,b(b)
            ,c(c)
        {   Point(x, y);
            Point(a, 0);
            Point(a, b);
        }
        ~Triangle() {}
        void setA(float a) {
            this->a = a;
        }
        void setB(float b) {
            this->b = b;
        }
        void setC(float c) {
            this->c = c;
        }
        float getA() {
            return a;
        }
        float getB() {
            return b;
        }
        float getC() {
            return c;
        }
        float T_perimeter (float a, float b, float c) {
            return a + b + c; 
        }
        float T_area (float a, float b, float c) {
        float p;
            p = (a + b + c) / 2;
            return sqrt(p * (p-a) * (p-b) * (p-c));
        }
        void foo() { std::cout << " TRIANGLE " << std::endl; }
};

class Rectangle: public Point {
    private:
        float l, w;
    public:
        Rectangle(float l=0, float w=0)
            :l(l)
            ,w(w)
        {
            Point(0, 0);
            Point(l, 0);
            Point(l, w);
            Point(0, w);
        }
        ~Rectangle() {}
        void setL(float l) {
            this->l = l;
        }
        void setW(float w) {
            this->w = w;
        }
        float getL() {
            return l;
        }
        float getW() {
            return w;
        }
        float R_perimeter(float l, float w) {
            return 2 * (l + w);
        }
        float R_area(float l, float w) {
            return l * w;
        }
};

