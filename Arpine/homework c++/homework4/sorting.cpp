#include <iostream>
#include <stdlib.h>

int main()
{
    int masiv[30];
    for(int i = 0; i < 30; i++) {
        masiv[i] = rand() % 100 + 1;
        }
    std::cout << "Duq uneq 30 elementanoc patahakan tveric kazmvac zangvac!\n";
    for(int j = 0; j < 30; j++) {
        std::cout << masiv[j] << " ";
        }
    std::cout << std::endl << std::endl;
    
    std::cout << "Zangvaci elementnern yst achman kargi!\n";
    int min = masiv[0];
    for(int i = 0; i < 30; i++) {
        for(int j = 0; j < 30; j++) {
            if(masiv[j] < min) {
            min = masiv[j];
            }
        }
        std::cout << min << " ";
        }
    std::cout << std::endl;
    
  return 0;
}