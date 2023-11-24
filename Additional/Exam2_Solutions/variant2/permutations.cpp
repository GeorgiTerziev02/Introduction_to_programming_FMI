#include <iostream>

unsigned countDigitOccurrences(unsigned number, unsigned digit) {
    unsigned counter = 0;

    while(number != 0) {
        unsigned lastDigit = number % 10;
        number /= 10;
        if (lastDigit == digit) {
            counter++;
        }
    }
    return counter;
}

bool isPermutation(unsigned first, unsigned second) {
    for (int digit = 0; digit <= 9; ++digit) {
        unsigned digitOccurrencesInFirst = countDigitOccurrences(first, digit);
        unsigned digitOccurrencesInSecond = countDigitOccurrences(second, digit);

        if (digitOccurrencesInFirst != digitOccurrencesInSecond) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned first, second;
    std::cin >> first >> second;

    std::cout << isPermutation(first, second);
}