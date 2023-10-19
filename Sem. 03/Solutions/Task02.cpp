#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int reversed = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }

    std::cout << reversed + 1;
}