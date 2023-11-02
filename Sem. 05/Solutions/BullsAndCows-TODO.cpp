#include <iostream>

const int DIGIT_COUNT = 4;

bool isValidLength(int number) {
	
}

bool hasUniqueDigits(int number) {

}

void readValidNumber(int& number) {
	do {
		std::cin >> number;
	} while (!isValidLength(number) || !hasUniqueDigits(number));
}

int main() {
	int toGuess;
	readValidNumber(toGuess);

	while (true) {
		int guess;
		readValidNumber(guess);

		int bulls;
		int cows;

		// ... calculate cows and bull

		if (bulls == DIGIT_COUNT) {
			break;
		}
	}
}