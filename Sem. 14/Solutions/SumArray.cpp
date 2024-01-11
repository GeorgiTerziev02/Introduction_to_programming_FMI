#include <iostream>

int sumArray(const int* arr, size_t size) {
    if(size == 0) {
        return 0;
    }

    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
   int arr[] = { 1, 2, 3, 4, 5 };
   std::cout << sumArray(arr, 5);
}