#include <iostream>

using namespace std;

unsigned countOccurrences(unsigned number, unsigned digit) {
    unsigned counter = 0;

    while(number != 0) {
        unsigned curDigit = number % 10;
        number /= 10;
        if (curDigit == digit) {
            counter++;
        }
    }
    return counter;
}

int main() {
    unsigned first;
    unsigned second;

    for (int i = 0; i <= 9; ++i) {
        unsigned occurrencesFirst = countOccurrences(first, i);
        unsigned occurrencesSecond = countOccurrences(second, i);

        if (occurrencesFirst != occurrencesSecond) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}