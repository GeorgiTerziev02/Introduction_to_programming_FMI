#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // std::cin >> a >> b;

    a += b;     // 15 10
    b = a - b;  // 15 5
    a -= b;     // 10 5

    std::cout << a;
    std::cout << b; 
}