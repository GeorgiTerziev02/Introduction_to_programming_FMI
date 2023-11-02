#include <iostream>

int& returnsLValue(int& a) {
    a++;
    return a;
}

int main() {
    int a = 5;
    int& b = returnsLValue(a);
    int c = returnsLValue(a);
    b++;

    std::cout << a << std::endl; // 8
    std::cout << b << std::endl; // 8
    std::cout << c << std::endl; // 7

    int d = 1;
    (++d) = 4;
    // (d++) = 5 // error - cannot assign to rvalue
    std::cout << d << std::endl; // 4
}