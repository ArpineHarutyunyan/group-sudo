#include <iostream>

int i = 1;
void tpum(int n) {
    if (i <= n) {
        std::cout << i << " ";
        ++i;
        tpum(n);
    } else if (n < 1) {
        std::cout << "Number isn't natural!\n";
    }
}

int main() {
  int n;
  std::cout << "Enter number:";
  std::cin >> n;
  tpum(n);
  return 0;
}
