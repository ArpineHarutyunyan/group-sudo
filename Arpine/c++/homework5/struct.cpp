#include <iostream>
#include <string>
struct Person {
    std::string firstName;
    std::string lastName;
    int age;
    std::string gender;
    bool status;
    float weight;
    std::string family;
    std::string prefix;
};

int main()
{
    Person masiv[13];
    masiv[0] = {"Arpine", "Harutyunyan", 23, "female", 1, 40, "unmarried", "Miss"};
    masiv[1] = {"Armen", "Abrahamyan", 19, "male", 1, 70, "unmarried", "Mr"};
    masiv[2] = {"Lilit", "Melqumyan", 19, "female", 1, 48.5, "unmarried", "Miss"};
    masiv[3] = {"Hrach", "Gevorgyan", 21, "male", 1, 69.2, "unmarried", "Mr"};
    masiv[4] = {"Ani", "Hakobyan", 19, "female", 1, 52, "unmarried", "Miss"};
    masiv[5] = {"Artur", "Gasparyan", 25, "male", 1, 65, "unmarried", "Mr"};
    masiv[6] = {"Miqayel", "Sargsyan", 17, "male", 1, 50, "unmarried", "Mr"};
    masiv[7] = {"Nvard", "Harutyunyan", 19, "female", 1, 52, "unmarried", "Miss"};
    masiv[8] = {"Tigran", "Hovhannisyan", 20, "male", 1, 75, "unmarried", "Mr"};
    masiv[9] = {"Edgar", "Grigoryan", 16, "male", 1, 58, "unmaried", "Mr"};
    masiv[10] = {"Mariam", "Karapetyan", 21, "female", 1, 53, "unmaried", "Miss"};
    masiv[11] = {"Nona", "Musaelyan", 19, "female", 1, 53, "unmaried", "Miss"};
    masiv[12] = {"Aleksandr", "Avagyan", 19, "male", 1, 62, "unmaried", "Mr"};
    
    std::cout <<"Instigate mobile dasyntaci masnakicnery!\n";
    
    for(int i = 0; i < 13; ++i) {
        std::cout << masiv[i].firstName << "\n";
    }

    std::cout << std:: endl;
    std::cout <<"Greq ayn anuny um masin uzum eq avelin imanal:";
    std::string name;
    std::cin >> name;
    
    for(int i=0;i<13;i++) {
            if(name== masiv[i].firstName) {
                std::cout << masiv[i].prefix << " " << masiv[i].firstName << " " << masiv[i].lastName << "\n" << masiv[i].age << " old year";
                std::cout << masiv[i].gender;
                std::cout << "\n" << masiv[i].weight << " kg";
                std::cout << "\n" << masiv[i].family;
                if(masiv[i].status == true) {
            std::cout << "\nStudent: Yes" << "\n";
            } else {
            std::cout << "\nStudent: No" << "\n";
            }
        }
    }
    return 0;
}