#include <iostream>

const unsigned DIGIT_COUNT = 4;

unsigned getNumberLength(unsigned number) {
	if (number == 0) {
		return 1;
	}

	unsigned length = 0;
	while (number != 0) {
		length++;
		number /= 10;
	}

	return length;
}

bool hasValidLength(unsigned number) {
	return getNumberLength(number) == DIGIT_COUNT;
}

bool containsDigit(unsigned number, unsigned digit) {
	// TODO: why only 9?
	if(digit > 9) {
		return false;
	}

	// handle number = 0 && digit == 0
	if(number == digit) {
		return true;
	}

	while (number != 0) {
		if (number % 10 == digit) {
			return true;
		}

		number /= 10;
	}

	return false;
}

bool hasUniqueDigits(unsigned number) {
	return true;
}

bool isValidInput(unsigned input) {
	// TODO: why order is important?
	return hasValidLength(input) && hasUniqueDigits(input);
}

void readNumberInput(unsigned& input) {
	do {
		std::cout << "Enter number with four unique digits: ";
		std::cin >> input;
	} while (!isValidInput(input));
}

unsigned calculateBulls(unsigned guess, unsigned toGuess) {
	return 0;
}

unsigned calculateCows(unsigned guess, unsigned toGuess) {
	return 0;
}

int main() {
	unsigned toGuess;
	readNumberInput(toGuess);

	unsigned guess, bulls, cows;
	do {
		readNumberInput(guess);

		// ... calculate cows and bull
		bulls = calculateBulls(guess, toGuess);
		cows = calculateCows(guess, toGuess);

		std::cout << "Bulls: " << bulls << " Cows: " << cows << std::endl;
	} while (bulls != DIGIT_COUNT);

	std::cout << "GG, You won" << std::endl;
}