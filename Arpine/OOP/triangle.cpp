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

class Triangle: public Point {
        protected:
            Point a;
            Point b;
        public:
            Triangle(Point a, Point b, Point c)
                :Point(c)
            {   this->a = a;
                this->b = b;
            }
            Triangle(const Triangle& t)
                :a(t.a)
                ,b(t.b)
            {}
            ~Triangle() {}
            void set_A(Point a) {
                            this->a = a;
                    }
                    void set_B(Point b) {
                            this->b = b;
                    }
                    Point get_A() {
                            return a;
            }
                    Point get_B() {
                            return b;
                    }
            float AB() {
                return sqrt(pow(a.get_X() - b.get_X(), 2) + pow(a.get_Y() - b.get_Y(), 2)); 
            }
            float BC() {
                return sqrt(pow(b.get_X() - Point::get_X(), 2) + pow(b.get_Y() - Point::get_Y(), 2)); 
            }
            float AC() {
                return sqrt(pow(a.get_X() - Point::get_X(), 2) + pow(a.get_Y() - Point::get_Y(), 2)); 
            }
            float Triangle_S() {
                float p = (AB() + BC() + AC()) / 2;
                return sqrt(p * (p-AB()) * (p-BC()) * (p-AC()));
            }
            float Triangle_P() {
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
    std::cout << "S = " << T.Triangle_S() << std::endl;
    std::cout << "P = " << T.Triangle_P() << std::endl;
    return 0;
}
