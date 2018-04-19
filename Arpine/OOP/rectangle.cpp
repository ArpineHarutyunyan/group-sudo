#include <iostream>
#include "point.cpp"

class Rectangle: public Point {
    private:
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
        float RectangleS() {
            return lenght() * hight();
        }
        float RectangleP() {
            return 2 * (lenght() + hight());
        }
};

int main() {
    float a, b, c, d;
    std::cout << "Input a : ";
    std::cin >> a;
    std::cout << "Input b : ";
    std::cin >> b;
    Point p(a, b);
    std::cout << "Input c : ";
    std::cin >> c;
    std::cout << "Input d : ";
    std::cin >> d;
    Point pp(c,d);
    Rectangle R(p,pp);
    std::cout << "S = " << R.RectangleS() << std::endl;
    std::cout << "P = " << R.RectangleP() << std::endl;

    return 0;
}
