#include <iostream>
#include "point.cpp"
#include <cmath>

class Circle: public Point {
    	private:
        	Point r;
    	public:
	      	Circle(Point a, Point r) 
			:Point(a) 
		{
			this->r = r;
		}
        	~Circle() {}
        	void setR(Point r) {
            		this->r = r;
        	}
        	Point getR() {
            		return r;
        	}
		float R() {
			return sqrt(pow(r.getX() - Point::getX(), 2) + pow(r.getY() - Point::getY(), 2));
		}
		float getL() {
            		return 2 * M_PI * R();
        	}
        	float getS() {
            		return M_PI * R() * R();
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
	Circle C(p, pp);
	std::cout << "Circle L = " << C.getL() << std::endl;
	std::cout << "Circle S = " << C.getS() << std::endl;
	std::cout << '\n';

    return 0;
}
