#include <iostream>

void func(int n) {
    int a, b, c, d, e;
    e = n % 10;
    d = n % 100 / 10;
    c = n % 1000 / 100;
    b = n % 10000 / 1000;
    a = n / 10000;
    if (n > 9999 && n < 100000) {    
    std::cout << e << d << c << b << a << "\n";
    } else if (n > 999 && n < 10000) {
    std::cout << e << d << c << b << "\n";
    } else if (n > 99 && n < 1000) {
    std::cout << e << d << c << "\n";
    } else if (n > 9 && n < 100) {
    std::cout << e << d << "\n";
    } else if (n > 0 && n < 10) {
    std::cout << e << "\n";
    } else if (n < 1 || n > 99999) {
    std::cout << "Error!\n";
    }
    }

int main()
{
  int n;
  std::cout << "Enter number:";
  std::cin >> n;
  func(n);
  return 0;
}
