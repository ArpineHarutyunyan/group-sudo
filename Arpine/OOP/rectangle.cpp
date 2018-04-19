#include <iostream>

class Point {
        protected:
                float x, y;
        public:
                Point(float x=0, float y=0)
                        :x(x)
                        ,y(y) {}
                Point(const Point& P)
                        :x(P.x)
                        ,y(P.y)
                {}
                ~Point() {}
        void set_X(float x) {
            this->x = x;
        }
        float get_X() {
            return x;
        }
        void set_Y(float y) {
            this->y = y;
        }
        float get_Y() {
            return y;
        }

};

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
        void set_A(Point a) {
            this->a = a;
        }
        Point get_A() {
            return a;
        }
        float lenght() {
            return a.get_X() - Point::get_X();
        }
        float hight() {
            return a.get_Y() - Point::get_Y();
        }
        float Rectangle_S() {
            return lenght() * hight();
        }
        float Rectangle_P() {
            return 2 * (lenght() + hight());
        }
};

int main() {
    std::cout << "Input a : ";
    float a;
    std::cin >> a;
    std::cout << "Input b : ";
    float b;
    std::cin >> b;
    Point p(a, b);
    std::cout << "Input c : ";
    float c;
    std::cin >> c;
    std::cout << "Input d : ";
    float d;
    std::cin >> d;
    Point pp(c,d);
    Rectangle R(p,pp);
    std::cout << "S = " << R.Rectangle_S() << std::endl;
    std::cout << "P = " << R.Rectangle_P() << std::endl;
    return 0;
}
