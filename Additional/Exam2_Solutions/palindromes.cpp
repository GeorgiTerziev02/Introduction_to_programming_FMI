#include <iostream>

bool isPalindrome(const int *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 -i]) {
            return false;
        }
    }

    return true;
}

bool isPalindrome(const int *arr, int begin, int end) { //end is the index of the last element
    for (int i = begin; i <= begin + (end - begin) / 2; i++) {
        if (arr[i] != arr[begin + end - i]) {
            return false;
        }
    }
    return true;
}

bool isConcatPalindromes2(const int *arr, int size) {
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

bool isConcatPalindromes(const int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int leftBegin = 0;
        int leftEnd = i;

        int rightBegin = i + 1;
        int rightEnd = size - 1;

        if (isPalindrome(arr, leftBegin, leftEnd)
            && isPalindrome(arr, rightBegin, rightEnd)) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 2, 1, 5};

    std::cout << isConcatPalindromes2(arr, 5);

    return 0;
}
