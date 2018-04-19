#include <iostream>
#include <string>

void fun1(){
    std::cout << "Draw!\n";
}
void fun2() {
    std::cout << "Winner first player!\n";
}
void fun3() {
    std::cout << "Winner second player!\n";
}
int main() {
    int b;
    std::string a;
    std::cout << "Player1 enter your option!\n";
    std::cin >> a;
    std::cout << "Player2 enter your option!\n";
    std::cin >> b;

    if ((a == "b" && b == 1) || (a == "m" && b == 2) || (a == "t" && b == 3)) {
        fun1();
    } else if ((a == "b" && b == 2) || (a == "m" && b == 3) || (a == "t" && b == 1)) {
	fun2();
    } else if ((b == 1 && a == "m") || (b == 2 && a == "t") || (b == 3 && a == "b")) {
	fun3();
    }
	
    return 0;
}
