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
}