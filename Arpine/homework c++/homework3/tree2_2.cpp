#include <iostream>
 
int main() {
    int num;
    std::cout << "Enter tree height:";
    std::cin >> num;

    for(int i = 1; i <= num; i++) {
        std::cout << std::endl;
        for(int j = i; j <= num; j++ ) {
        std::cout << "*";
    }
    } 
    return 0;
}
