#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    int number;
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        sum -= number;
    }

    std::cout << sum;
}