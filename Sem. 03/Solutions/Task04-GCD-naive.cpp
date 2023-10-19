#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int i = a > b ? b : a;
    while (a % i != 0 || b % i != 0) {
        i--;
    }

    std::cout << i;
}