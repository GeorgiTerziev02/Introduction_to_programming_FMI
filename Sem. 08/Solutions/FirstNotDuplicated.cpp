#include <iostream>

int findNotDuplicated(const int* arr, unsigned length) {
    int result = 0;
    // XOR of a number with itself is 0
    // XOR of a number with 0 is the number itself
    // Every number has different binary representation
    // So the XOR of all numbers in the array will be the number that is not duplicated
    for (unsigned i = 0; i < length; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    const unsigned LENGTH = 7;
    // Every number in the array is duplicated except one
    int arr1[] = { 5, 1, 5, 6, 1, 7, 6 };
    int arr2[] = { 5, 5, 5, 5, 1, 5, 5 };

    std::cout << findNotDuplicated(arr1, 7);
    // Will this work? Why?
    // std::cout << findNotDuplicated(arr2, 7);
}