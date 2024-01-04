#include <iostream>

const unsigned ALPHABET_LETTERS_COUNT = 26;

bool isLower(char c) {
	return 'a' <= c && c <= 'z';
}

size_t getLowerCount(const char* str, size_t* counter) {
	if (!str) {
		return 0;
	}

	size_t lowerCount = 0;
	while (*str) {
		if (isLower(*str)) {
			lowerCount++;
			counter[*str - 'a']++;
		}

		str++;
	}

	return lowerCount;
}

char* getSortLowerLetters(const char* str) {
	if (!str) {
		return nullptr;
	}

	size_t counter[ALPHABET_LETTERS_COUNT] = {};
	size_t lowerLettersCount = getLowerCount(str, counter);
	char* result = new char[lowerLettersCount + 1];
	result[lowerLettersCount] = '\0';
	if (lowerLettersCount == 0) {
		return result;
	}

	size_t resultIndex = 0;
	for (size_t i = 0; i < ALPHABET_LETTERS_COUNT; i++) {
		if (counter[i] == 0) {
			continue;
		}

		while (counter[i]) {
			result[resultIndex++] = 'a' + i;
			counter[i]--;
		}
	}

	return result;
}

int main() {
	char* sortedLowerLetters = getSortLowerLetters("a123fZsdaf");

	std::cout << sortedLowerLetters;

	delete[] sortedLowerLetters;
}