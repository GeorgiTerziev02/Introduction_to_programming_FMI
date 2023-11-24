#include <iostream>

// v1
bool isPalindrome(const int *arr, unsigned beginIndex, unsigned endIndex) { //end is the index of the last element
    int middleIndex = beginIndex + (endIndex - beginIndex) / 2;
    for (int i = beginIndex; i <= middleIndex; i++) {
        if (arr[i] != arr[endIndex - (i - beginIndex)]) {
            return false;
        }
    }
    return true;
}

// v1
bool isConcatenationOfPalindromes(const int *arr, unsigned size) {
    for (int i = 1; i < size - 1; i++) {
        if (isPalindrome(arr, 0, i) &&
            isPalindrome(arr, i + 1, size - 1)) {
            return true;
        }
    }
    return false;
}

// v2
bool isPalindrome(const int *arr, unsigned size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 -i]) {
            return false;
        }
    }

    return true;
}

// v2
bool isConcatenationOfPalindromes2(const int *arr, unsigned size) {
    for (int i = 1; i < size; i++) {
        //arr + 1 moves the pointer to the arr with 1 element to the right
        //(The pointer points to the second element)
        if (isPalindrome(arr, i) &&
            isPalindrome(arr + i, size - i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 2, 1, 5};
    std::cout << isConcatenationOfPalindromes(arr, 5);
}
