#include <iostream>
#include <stdlib.h>

int main()
{
    int masiv[30];
    for(int i = 0; i < 30; i++) {
        masiv[i] = 2 + 3*i;
        }
    int num;
    std::cout << "Duq uneq 30 elementanoc zangvac.\nNermuceq voreve tiv:";
    std::cin >> num;
    for(int j = 0; j < 30; j++) {
        std::cout << masiv[j] << " ";
        }
    std::cout << std::endl;
    
    for(int k = 0; k < 30; k++) {
        if(masiv[k] == num) {
            std::cout << num << "-y zangvaci " << k + 1 << "-rd elementn e!\n";
            break;
            }
        }
    int qanak = 0;
    for(int m = 0; m < 30; m++) {
        if(masiv[m] != num) {
            qanak++;
            }
        }
    if(qanak == 30) {
        std::cout << "Tivy chka zangvacum!\n";        
        }
  
  return 0;
}