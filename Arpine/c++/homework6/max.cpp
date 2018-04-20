#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int size, num = 0;
    int* arrNum = new int[size];
    std::cout << "Write size array:";
    std::cin >> size; 
    int arr[size];
    
    for(int i = 0; i < size; ++i) {
        arr[i] = rand() % 21 -10;
    }

    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    
    int m = 0;
    for(int j = 0; j < size; ++j) {
        if(num + arr[j] >= arr[j] ) {
            num += arr[j];
            m = j;
        }
        if(num + arr[j] < arr[j]) {
            num = 0;
        }
        arrNum[j] = num;
    }
        
    int k = 0;
    int max_arrNum;
    max_arrNum = arrNum[0];
    for(int i = 0; i < size; i++) {
        if(arrNum[i] > max_arrNum) {
            max_arrNum = arrNum[i];
            k = i;
        }
    }
    delete [] arrNum;
    std::cout << "\nMasivi " << m << "-ic " << k << " elementneri gumary:" << max_arrNum << "\n";

    return 0;
}
