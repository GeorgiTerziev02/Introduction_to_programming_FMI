#include <iostream>

bool containsDivisorOfK(const int *arr, unsigned length, unsigned k) {
    for (unsigned i = 0; i < length; ++i) {
        if (k % arr[i] == 0) {
            return true;
        }
    }

    return false;
}

unsigned countNotDivisible(const int *arr, unsigned length, unsigned k) {
    unsigned counter = 0;
    for (unsigned i = 1; i <= k; ++i) {
        counter += (!containsDivisorOfK(arr, length, i));
    }

    return counter;
}

int main() {
    const int ARR_LENGTH = 5;
    int arr[] = {2, 3, 4, 5, 6};
    unsigned k = 10;
    std::cout << countNotDivisible(arr, ARR_LENGTH, k);
}
