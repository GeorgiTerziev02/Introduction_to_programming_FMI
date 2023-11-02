#include <cmath>

bool isPrime(unsigned int number) {
	if (number == 2) {
		return true;
	}

	if (number == 1 || number % 2 == 0) {
		return false;
	}

	double sqrtN = sqrt(number);
	for (int i = 3; i <= sqrtN; i += 2) {
		if (number % i == 0) {
			return false;
		}
	}

    return true;
}