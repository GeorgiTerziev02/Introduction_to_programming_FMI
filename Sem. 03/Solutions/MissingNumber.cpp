#include <iostream>

// find the missing number from [0, n]
int main() {
    int numbersCount;
    std::cin >> numbersCount;

    int sum = 0;
    for (int i = 1; i <= numbersCount; i++) {
        sum += i;
    }

    int number;
    for (int i = 0; i < numbersCount; i++) {
        std::cin >> number;
        sum -= number;
    }

    std::cout << sum;
}