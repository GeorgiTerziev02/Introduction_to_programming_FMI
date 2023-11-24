#include <iostream>

int countNotDivisible(const int *arr, int length, int k) {
    int counter = 0;
    for (int i = 1; i <= k; ++i) {
        bool isDivisible = false;
        for (int j = 0; j < length; ++j) {
            if (i % arr[j] == 0) {
                isDivisible = true;
                break;
            }
        }
        counter += (!isDivisible);
    }

    return counter;
}

int main() {

    return 0;
}
