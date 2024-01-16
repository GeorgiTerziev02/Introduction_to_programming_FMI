#include <iostream>

int getIndexByCondition(const int* arr, size_t size, bool(*predicate)(int)) {
    if (!arr || size == 0) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        if (predicate(arr[i])) {
            return i;
        }
    }

    return -1;
}

int main() {
    const size_t SIZE = 5;
    int arr[SIZE] = { 1, 3, 5, 7, 9 };

    int index = getIndexByCondition(arr, 0, [](int x) {
        return x % 2 == 0;
    });

    int index2 = getIndexByCondition(arr, SIZE, [](int x) {
        return x % 2 != 0;
    });

    int index3 = getIndexByCondition(arr, SIZE, [](int x) {
        return x == 3;
    });

    std::cout << index << std::endl;
    std::cout << index2 << std::endl;
    std::cout << index3 << std::endl;
}