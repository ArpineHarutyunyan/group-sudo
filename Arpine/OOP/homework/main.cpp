#include "point.cpp"

int main() {
    Triangle T;
    float a, b, c;
    std::cout << "Enter triangle sides!\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    std::cout << "P = " << T.T_perimeter(a, b, c) << std::endl;
    std::cout << "S = " << T.T_area(a, b, c) << std::endl;
    
    std::cout << std::endl;
    
    Rectangle R;
    float l, w;
    std::cout << "Enter rectangle sides!\n";
    std::cout << "l = ";
    std::cin >> l;
    std::cout << "w = ";
    std::cin >> w;
    std::cout << "P = " << R.R_perimeter(l, w) << std::endl;
    std::cout << "S = " << R.R_area(l, w) << std::endl;
    
    return 0;
}
