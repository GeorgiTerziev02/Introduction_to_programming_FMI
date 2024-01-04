#include <iostream>

size_t strLen(const char* str) {
	if (!str) {
		return 0;
	}

	size_t index = 0;
	while (str[index]) {
		index++;
	}

	return index;
}

bool isDigit(char c) {
	return '0' <= c && c <= '9';
}

size_t getDigitsCount(const char* str) {
	if (!str) {
		return 0;
	}

	size_t result = 0;
	while (*str) {
		if (isDigit(*str)) {
			result++;
		}
		str++;
	}

	return result;
}

size_t getNumbersCount(const char* str) {
	if (!str) {
		return 0;
	}

	size_t result = 0;

	while (*str) {
		// '\0' saves the day
		if (isDigit(*str) && !isDigit(*(str + 1))) {
			result++;
		}

		str++;
	}

	return result;
}

char* censor(const char* str) {
	if (!str) {
		return nullptr;
	}

	size_t resultLength = strLen(str) - getDigitsCount(str) + getNumbersCount(str);
	char* result = new char[resultLength + 1];
	size_t resultIndex = 0;

	while (*str) {
		if (!isDigit(*str)) {
			result[resultIndex++] = *str;
		}
		else if (!isDigit(*(str + 1))) {
			result[resultIndex++] = '*';
		}

		str++;
	}

	result[resultLength] = '\0';
	return result;
}

int main() {
	char* censoredString = censor("0A1B23C12345a5");
	std::cout << censoredString;
	delete[] censoredString; // !!!
}
