#include <iostream>
#include "point.cpp"
#include <cmath>

class Triangle: public Point {
    protected:
        Point a;
        Point b;
    public:
        Triangle(Point a, Point b, Point c)
            :Point(c) {
            this->a = a;
            this->b = b;
            }
        Triangle(const Triangle& t)
            :a(t.a)
            ,b(t.b) {}
        ~Triangle() {}
        void setA(Point a) {
            this->a = a;
        }
        void set_B(Point b) {
            this->b = b;
        }
        Point getA() {
            return a;
        }
        Point getB() {
            return b;
        }
        float AB() {
            return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2)); 
        }
        float BC() {
            return sqrt(pow(b.getX() - Point::getX(), 2) + pow(b.getY() - Point::getY(), 2)); 
        }
        float AC() {
            return sqrt(pow(a.getX() - Point::getX(), 2) + pow(a.getY() - Point::getY(), 2)); 
        }
        float TriangleS() {
            float p = (AB() + BC() + AC()) / 2;
                return sqrt(p * (p-AB()) * (p-BC()) * (p-AC()));
        }
        float TriangleP() {
            return AB() + BC() + AC(); 
        }
};

int main() {
    float a, b;
    std::cout << "Input a : ";
    std::cin >> a;
    std::cout << "Input b : ";
    std::cin >> b;
    Point p(a, b);
    float c, d;
    std::cout << "Input c : ";
    std::cin >> c;
    std::cout << "Input d : ";
    std::cin >> d;
    Point pp(c, d);
    float e, f;
    std::cout << "Input e : ";
    std::cin >> e;
    std::cout << "Input f : ";
    std::cin >> f;
    Point ppp(e, f);
    Triangle T(p, pp, ppp);
    std::cout << "S = " << T.TriangleS() << std::endl;
    std::cout << "P = " << T.TriangleP() << std::endl;

    return 0;
}
