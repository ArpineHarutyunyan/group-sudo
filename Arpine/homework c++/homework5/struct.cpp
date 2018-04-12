#include <iostream>
#include <string>
struct Person {
    std::string firstName;
    std::string lastName;
    int age;
    std::string gender;
    std::string status;
    void foo () {
        std::cout <<"Firstname:" << firstName << "\nLastname:" << lastName << "\nAge:" << age;
        std::cout << "\nGender:" << gender << "\nStatus:" << status << "\n";;
    }
};

int main()
{
    Person Arpine = {"Arpine", "Harutyunyan", 23, "female", "student"};
    Person Armen = {"Armen", "Abrahamyan", 19, "male", "student"};
    Person Lilit = {"Lilit", "Melqumyan", 19, "female", "student"};
    Person Hrach = {"Hrach", "Gevorgyan", 21, "male", "student"};
    Person Ani = {"Ani", "Hakobyan", 19, "female", "student"};
    Person Artur = {"Artur", "Gasparyan", 25, "male", "student"};
    Person Miqayel = {"Miqayel", "Sargsyan", 17, "male", "student"};
    Person Nvard = {"Nvard", "Harutyunyan", 19, "female", "student"};
    Person Tigran = {"Tigran", "Hovhannisyan", 20, "male", "student"};
    Person Edgar = {"Edgar", "Grigoryan", 16, "male", "student"};
    Person Mariam = {"Mariam", "Karapetyan", 21, "female", "student"};
    Person Nona = {"Nona", "Musaelyan", 19, "female", "student"};
    Person Aleksandr = {"Aleksandr", "Avagyan", 19, "male", "student"};
    std::cout <<"Instigate mobile dasyntaci masnakicnery!\n";
    
    std::cout << "Arpine\n" << "Armen\n" << "Lilit\n" << "Hrach\n";
    std::cout << "Ani\n" << "Artur\n" << "Miqayel\n" << "Nvard\n";
    std::cout << "Tigran\n" << "Edgar\n" << "Mariam\n" << "Nona\n" << "Aleksandr\n";
    std::cout << std:: endl;;
    std::cout <<"Greq ayn anuny um masin uzum eq avelin imanal:";
    std::string name;
    std::cin >> name;
    
    if (name == "Arpine") {
        Arpine.foo();
    }
    if (name == "Armen") {
        Armen.foo();
    }
    if (name == "Lilit") {
        Lilit.foo();
    }
    if(name == "Hrach") {
        Hrach.foo();
    }
    if (name == "Ani") {
        Ani.foo();
    }
    if (name == "Artur") {
        Artur.foo();
    }
    if (name == "Miqayel") {
        Miqayel.foo();
    }
    if (name == "Nvard") {
        Nvard.foo();
    }
    if (name == "Tigran") {
        Tigran.foo();
    }
    if (name == "Edgar") {
        Edgar.foo();
    }
    if (name == "Mariam") {
        Mariam.foo();
    }
    if (name == "Nona") {
        Nona.foo();
    }
    if (name == "Aleksandr") {
        Aleksandr.foo();
    }
    
    return 0;
}