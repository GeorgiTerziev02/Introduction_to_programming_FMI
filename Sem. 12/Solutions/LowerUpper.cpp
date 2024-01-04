#include <iostream>

bool isLower(char c) {
	return 'a' <= c && c <= 'z';
}
bool isUpper(char c) {
	return 'A' <= c && c <= 'Z';
}

void getLowerAndUpperCount(
	const char* str,
	size_t& lowerCount,
	size_t& upperCount
) {
	if (!str) {
		return;
	}

	lowerCount = upperCount = 0;

	while (*str) {
		if (isLower(*str)) {
			lowerCount++;
		}
		else if (isUpper(*str)) {
			upperCount++;
		}

		str++;
	}
}

void getLowerAndUpperString(
	const char* str,
	char*& lowerString,
	char*& upperString
) {
	if (!str) {
		return;
	}

	size_t lowerCount = 0, upperCount = 0;
	getLowerAndUpperCount(str, lowerCount, upperCount);
	lowerString = new char[lowerCount + 1];
	upperString = new char[upperCount + 1];
	lowerString[lowerCount] = upperString[upperCount] = '\0';
	if (lowerCount == 0 && upperCount == 0) {
		return;
	}

	size_t lowerIndex = 0, upperIndex = 0;
	while (*str) {
		if (isLower(*str)) {
			lowerString[lowerIndex++] = *str;
		}
		else if (isUpper(*str)) {
			upperString[upperIndex++] = *str;
		}

		str++;
	}
}

int main() {
	char* lowerString = nullptr;
	char* upperString = nullptr;
	getLowerAndUpperString("Pa1a2a3B4B5Bz", lowerString, upperString);

	std::cout << lowerString << std::endl; // aaaz
	std::cout << upperString << std::endl; // PBBB

	delete[] lowerString; // !!!
	delete[] upperString; // !!!
}