#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int reversed = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        reversed = reversed * 10 + lastDigit;
        number /= 10;
    }

    std::cout << reversed + 1;
}