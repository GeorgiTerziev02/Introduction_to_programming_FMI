#include <iostream>

size_t myStrLen(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

bool _isPalindrome(const char* str, size_t size) {
	if (size <= 1) {
		return true;
	}

	return str[0] == str[size - 1] && _isPalindrome(str + 1, size - 2);
}

bool isPalindrome(const char* str) {
	size_t size = myStrLen(str);
	return _isPalindrome(str, size);
}

int main() {
	char arr[] = "abcba";

	std::cout << isPalindrome(arr);
}