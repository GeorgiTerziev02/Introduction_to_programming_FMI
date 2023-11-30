#include <iostream>

const unsigned MAX_SIZE = 1024;

void mySwap(char& first, char& second) {
	unsigned temp = first;
	first = second;
	second = temp;
}

void reverseArray(char* arr, unsigned length) {
	for (unsigned i = 0; i < length / 2; i++) {
		mySwap(arr[i], arr[length - i - 1]);
	}
}

char decimalToChar(unsigned number) {
	if (0 <= number && number <= 9) {
		return number + '0';
	}
	if (10 <= number && number <= 36) {
		return (number - 10) + 'A';
	}

	return 0;
}

unsigned charToDecimal(char ch) {
	if ('0' <= ch && ch <= '9') {
		return ch - '0';
	}
	if ('A' <= ch && ch <= 'Z') {
		return ch - 'A' + 10;
	}

	return 0;
}

void fromDecimalToAnyBase(unsigned decimal, char* result, unsigned& resultLength, unsigned toBase) {
	resultLength = 0;
	while (decimal != 0) {
		unsigned lastDigit = decimal % toBase;
		result[resultLength++] = decimalToChar(lastDigit);
		decimal /= toBase;
	}

	reverseArray(result, resultLength);
}

unsigned fromAnyBaseToDecimal(const char* numberArr, unsigned& numberLength, unsigned fromBase) {
	unsigned result = 0;
	for (
		int i = numberLength - 1, multiplier = 1;
		i >= 0; 
		i--, multiplier *= fromBase
	) {
		result += charToDecimal(numberArr[i]) * multiplier;
	}

	return result;
}

void fromAnyBaseToAnyBase(
	const char* fromNumber,
	unsigned fromNumberLength,
	char* toNumber,
	unsigned& toNumberLength,
	unsigned fromBase,
	unsigned toBase
) {
	unsigned decimal = fromAnyBaseToDecimal(fromNumber, fromNumberLength, fromBase);
	fromDecimalToAnyBase(decimal, toNumber, toNumberLength, toBase);
}

void printArr(const char* result, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cout << result[i];
	}
	std::cout << std::endl;
}

int main() {
	{
		unsigned decimalNumber = 101;
		char number[MAX_SIZE] = {};
		unsigned numberLength = 0;
		fromDecimalToAnyBase(decimalNumber, number, numberLength, 2);

		printArr(number, numberLength);

		unsigned afterConversionDecimal = fromAnyBaseToDecimal(number, numberLength, 2);
		std::cout << afterConversionDecimal << std::endl;
	}
	{
		unsigned decimalNumber = 101;
		char number[MAX_SIZE] = {};
		unsigned numberLength = 0;
		fromDecimalToAnyBase(decimalNumber, number, numberLength, 16);

		printArr(number, numberLength);

		unsigned afterConversionDecimal = fromAnyBaseToDecimal(number, numberLength, 16);
		std::cout << afterConversionDecimal << std::endl;
	}

	{
		unsigned numberLength = 2;
		char number[MAX_SIZE] = { 'F', 'E', '\0'};

		char result[MAX_SIZE];
		unsigned resultLength = 0;

		fromAnyBaseToAnyBase(number, numberLength, result, resultLength, 16, 2);

		printArr(result, resultLength);
	}
}
