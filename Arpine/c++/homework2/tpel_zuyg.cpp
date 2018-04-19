#include <iostream>

int i = 2;
void tpum(int n) {
    if (i <= n && i % 2 == 0) {
        std::cout << i << " ";
        i = i + 2;
        tpum(n);
    }
}

int main() {
    int n;
    std::cout << "Enter number:";
    std::cin >> n;
    if (n >= 1) {
    std::cout << "Zuyg tvery:";
    tpum(n);
    } else {
    std::cout << "Number isn't natural!\n";
    }
  return 0;
}
