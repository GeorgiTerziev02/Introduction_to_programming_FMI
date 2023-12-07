#include <iostream>

int btw() {
    std::cout << 42;
    return 1;
}

// What will be printed?
int main() {
    int a = 0 & btw() & btw();
    // && and || are lazy evaluated!
    int b = 0 && btw() && btw();
}