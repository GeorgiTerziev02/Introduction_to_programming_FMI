
#include <iostream>

const unsigned MAX_SIZE = 1024;

void mySwap(unsigned& first, unsigned& second) {
	unsigned temp = first;
	first = second;
	second = temp;
}

void reverseArray(unsigned* arr, unsigned length) {
	for (unsigned i = 0; i < length / 2; i++) {
		mySwap(arr[i], arr[length - i - 1]);
	}
}

void decimalToBinary(unsigned decimal, unsigned* result, unsigned& resultLength) {
	resultLength = 0;
	while (decimal != 0) {
		unsigned lastDigit = decimal % 2;
		result[resultLength++] = lastDigit;
		decimal /= 2;
	}

	reverseArray(result, resultLength);
}

unsigned binaryToDecimal(const unsigned* binaryNumber, unsigned& binaryNumberLength) {
	unsigned result = 0;
	for (
		int i = binaryNumberLength - 1, multiplier = 1; 
		i >= 0; 
		i--, multiplier *= 2
	) {
		result += binaryNumber[i] * multiplier;
	}

	return result;
}

void printArr(const unsigned* result, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cout << result[i];
	}
	std::cout << std::endl;
}


int main() {

	unsigned decimalNumber = 125;
	unsigned binaryNumber[MAX_SIZE] = {};
	unsigned binaryNumberLength = 0;
	decimalToBinary(decimalNumber, binaryNumber, binaryNumberLength);

	printArr(binaryNumber, binaryNumberLength);

	unsigned afterConversionDecimal = binaryToDecimal(binaryNumber, binaryNumberLength);
	std::cout << afterConversionDecimal;
}
