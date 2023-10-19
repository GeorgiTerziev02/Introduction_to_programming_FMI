#include <iostream>
int main() {
    int mostCommonDigit = 0;
    int mostCommonDigitCount = 0;

    int number;
    std::cin >> number;

    for (int i = 0; i <= 9; i++) {
        int currentCount = 0;
        int copy = number;

        while (copy != 0) {
            if (copy % 10 == i) {
                currentCount++;
            }

            copy /= 10;
        }

        if (mostCommonDigitCount > currentCount) {
            mostCommonDigitCount = currentCount;
            mostCommonDigit = i;
        }
    }

    std::cout << mostCommonDigit << " has appeared " << mostCommonDigitCount;
}