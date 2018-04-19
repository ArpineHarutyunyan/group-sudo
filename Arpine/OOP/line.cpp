#include <iostream>
#include "point.cpp"
#include <cmath>

class Line: public Point {
    private:
		Point a;
   	public:
        Line(Point a, Point b)
			:Point(b) {
			this->a = a;
		}
        ~Line() {}
        void setA() {
            this->a = a;
        }
        Point getA() {
            return a;
        }
        float lineL() {
			return sqrt(pow(a.getX() - Point::getX(), 2) + pow(a.getY() - Point::getY(), 2));
        	}
		void foo() {
		    float k = (a.getY() - Point::getY()) / (a.getX() - Point::getX());
		    float b = (Point::getY() - Point::getX()) * k;
		    for (int x = Point::getX(); x < a.getX(); ++x) {
				std::cout << "x = " << x << " ";
				std::cout << "y = " << k * x + b << std::endl;
	        }
		}
};

int main() {
   int a, b, c, d;
	std::cout << "Input a : ";
	std::cin >> a;
	std::cout << "Input b : ";
	std::cin >> b;
    std::cout << "Input c : ";
    std::cin >> c;
    std::cout << "Input d : ";
    std::cin >> d;
	Point p(a, b);
	Point pp(c, d);
	Line L(p, pp);
	std::cout << "Line L = " << L.lineL() << std::endl;
	std::cout << '\n';
	L.foo();

    return 0;
}
