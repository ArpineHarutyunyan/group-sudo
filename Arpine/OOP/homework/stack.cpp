#include <iostream>
class Stack {
    
    private:
        const int size;
        int *arr;
        int top = -1;
        
    public:
        Stack(int size):size(size) {
            arr = new int [size];
        }
        ~Stack(){}
        bool empty() {
            return (top == -1);
            
        }
        bool full() {
            return (top == size - 1);
                    }
        void push(int x) {
            arr[++top] = x;
        }
        int pop() {
            return arr[top--];
        }
        void Print() {
            if (top == -1) {
                std::cout << "Stack is empty!\n";
            }
           if (top == size - 1) {
                std::cout << "Stack is full!\n";
            }
            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << ' ';
            }
        }
        
};
int main() {
    int x;
    Stack S(3);
    S.Print();
    while (!S.full()) {
        std::cout << "\nPush number in stack : ";
        std::cin >> x;
        S.push(x);
        S.Print();
    }
    if (S.full()) {
        std::cout << "\nThe top element is " << S.pop();
    }
    

    return 0;    
} 

