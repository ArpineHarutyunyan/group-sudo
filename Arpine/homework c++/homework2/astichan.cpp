#include <iostream>
int i = 1;
int pow(int n, int k) {
    if (i <= k) {
       return n* pow(n,k-1);
       i++;
    }

}

int main() {
    int k;
    double n;
    std::cout << "Enter base of number! : ";
    std::cin >> n;
    std::cout << "Enter the degree of the number! : ";
    std::cin >> k;
    std::cout << n << " ^ " << k << "  = " << pow(n,k) << "\n";
    
    return 0;
}
