#include <iostream>

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

int main() {
	unsigned int n;
	std::cin >> n;

	for (unsigned int i = 6; i < n; i += 6) {
		if (isPrime(i - 1) && isPrime(i + 1)) {
            std::cout << i - 1 << " " << i + 1 << std::endl;
        }
	}
}