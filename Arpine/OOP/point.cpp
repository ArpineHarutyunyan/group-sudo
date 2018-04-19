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

};
