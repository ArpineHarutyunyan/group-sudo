#include <iostream>

int i = 1;
void tpum(int n) {
    if (i <= n && i % 2 == 1) {
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
    std::cout << "Kent tvery:";
    tpum(n);
    } else {
    std::cout << "Number isn't natural!\n";
    }
  return 0;
}
