#include <iostream>
#include <cmath>

class Point {
    protected:
        float x, y;
    public:
        Point() {
            x = 0;
            y = 0;
        }
        ~Point() {}
        float getX() const {
            return x;
        }
        float getY() const {
            return y;
        }
        void setX(float x) {
            this->x = x;
        }
        void setY(float y) {
            this->y = y;
        }

        void foo() { std::cout << "POINT\n"; }
};

class Circle: public Point {
    private:
        unsigned int r;
    public:
        Circle() {
            r = 0;
        }   
        
        ~Circle() {}

        unsigned int getR() {
            return r;
        }
        void setR(unsigned int r) {
            this->r = r;
        }
        
        float getL(unsigned int r) { 
            float l = 2 * M_PI * r;
            return l;
        }
        float getS(unsigned int r) {
            float s = M_PI * r *r;
            return s;
        }

        unsigned int operator* (int k) {
            r = r * k;
        }

        void foo() { std::cout << "POINT\n"; }
};

int main() {
    Circle a;
    Point* p = &a;
    p->foo();
    
    std::cout << "L = " << a.getL(10) << std::endl;
    std::cout << "S = " << a.getS(5) << std::endl;
    std::cout << "R = " << a*3 << std::endl;

    return 0;
}
