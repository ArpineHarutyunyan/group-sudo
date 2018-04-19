#include <iostream>

class Point {
    protected:
        double x, y;
    public:
        Point(double x = 0, double y = 0) {
            this->x = x;
            this->y = y;
        }
        ~Point() {}
        double getX() {
            return x;
        }
        double getY() {
            return y;
        }
        void setX(double x) {
            this->x = x;
        }
        void setY(double y) {
            this->y = y;
        }
};

class Line: public Point {
    protected:
        double x1, y1;
    public:
        Line(double x1 = 0, double y1 = 0)
            :x1(x1)
            ,y1(y1)
        {
            Point();
        }
        ~Line() {}
        double getX1() {
            return x1;
        }
        double getY1() {
            return y1;
        }
        void setX1(double x1) {
            this->x1 = x1;
        }
        void setY1(double y1) {
            this->y1 = y1;
        }
        float print_cord (double x1, double y1) {
            double k;
            k = (y1 - y) / (x1 - x);

            for (int i = x + 1; i < x1; ++i) {
                std::cout << "x = " << i << " " << "y = " << k * (i - x) + y << "\n";
            }
            std::cout << "\n"; 

        }
};

int main() {
    Line a;
    double x1, y1;
    std::cout << "Enter x1:";
    std::cin >> x1;
    std::cout << "Enter y1:";
    std::cin >> y1;

    a.print_cord(x1, y1);

    return 0;
}
