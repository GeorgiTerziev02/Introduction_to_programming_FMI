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
	if (digit > 9) {
		return false;
	}

	// handle number = 0 && digit == 0
	if (number == digit) {
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
	if (number == 0) {
		return true;
	}

	while (number != 0) {
		unsigned lastDigit = number % 10;
		if (containsDigit(number /= 10, lastDigit)) {
			return false;
		}
	}

	return true;
}

bool isValidInput(unsigned input) {
	return hasValidLength(input) && hasUniqueDigits(input);
}

void readNumberInput(unsigned& input) {
	do {
		std::cout << "Enter number with four unique digits: ";
		std::cin >> input;
	} while (!isValidInput(input));
}

unsigned calculateBulls(unsigned guess, unsigned toGuess) {
	unsigned result = 0;
	while (guess != 0) {
		unsigned firstNumberLastDigit = guess % 10;
		unsigned secondNumberLastDigit = toGuess % 10;

		if (firstNumberLastDigit == secondNumberLastDigit) {
			result++;
		}

		guess /= 10;
		toGuess /= 10;
	}

	return result;
}

unsigned calculateBullsAndCowsSum(unsigned guess, unsigned toGuess) {
	unsigned result = 0;
	while (guess != 0) {
		unsigned lastDigit = guess % 10;
		result += containsDigit(toGuess, lastDigit);
		guess /= 10;
	}

	return result;
}

int main() {
	unsigned toGuess;
	readNumberInput(toGuess);

	unsigned guess, bulls, cows;
	do {
		readNumberInput(guess);

		bulls = calculateBulls(guess, toGuess);
		cows = calculateBullsAndCowsSum(guess, toGuess) - bulls;

		std::cout << "Bulls: " << bulls << " Cows: " << cows << std::endl;
	} while (bulls != DIGIT_COUNT);

	std::cout << "GG, You won" << std::endl;
}