#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person masiv[13] = {
        {"Arpine", 23},
        {"Armen", 19},
        {"Lilit", 19},
        {"Hrach", 21},
        {"Ani", 19},
        {"Artur", 25},
        {"Miqayel", 17},
        {"Nvard", 19},
        {"Tigran", 20},
        {"Edgar", 16},
        {"Mariam", 21},
        {"Nona", 19},
        {"Aleksandr", 19}
    };
    int arr[13];
    int num;
    std::cout << "Age:";
    std::cin >> num;
    for(int i=0;i<13;i++) {
        if(num >= masiv[i].age) {
            arr[i] = num - masiv[i].age;
        } else if(num < masiv[i].age) {
            arr[i] = masiv[i].age - num;
        }            
    }
            
    int min;
    min = arr[0];
    for(int j=0;j<13;j++) {
        if(arr[j] < min) {
            min = arr[j];
        }
    }

    std::cout << "The closest age to the array:" << min + num << std::endl;;

    return 0;
}
