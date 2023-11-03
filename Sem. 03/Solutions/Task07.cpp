#include <iostream>

int main() {
	int number;
	std::cin >> number;

	for (int i = number; i >= 1; i--) {
		bool isPrime = true;

		if (i == 2) {
			// divide as many times as you can
			while (number % i == 0) {
				std::cout << i << " ";
				number /= i;
			}

			continue;
		}

		if (i == 1 || i % 2 == 0) {
			isPrime = false;
			continue;
		}

		double sqrtN = sqrt(i);
		for (int j = 3; j <= sqrtN; j += 2) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			// divide as many times as you can
			while (number % i == 0) {
				std::cout << i << " ";
				number /= i;
			}
		}
	}
}

