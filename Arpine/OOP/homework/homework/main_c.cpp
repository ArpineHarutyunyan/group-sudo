#include "obj.cpp"

int main() {
    Circle a;
    Point* p = &a;
    p->foo();
    
    std::cout << "L = " << a.getL(10) << std::endl;
    std::cout << "S = " << a.getS(5) << std::endl;
    std::cout << "R = " << a*3 << std::endl;

    return 0;
}

