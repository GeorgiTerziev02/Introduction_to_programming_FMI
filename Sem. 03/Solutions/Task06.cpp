#include <iostream>

int main() {
	int n;
	std::cin >> n;

	if (n == 2) {
		std::cout << "Prime" << std::endl;
		return 0;
	}

	if (n == 1 || n % 2 == 0) {
		std::cout << "Not prime" << std::endl;
		return 0;
	}

	double sqrtN = sqrt(n);
	for (int i = 3; i <= sqrtN; i += 2) {
		if (n % i == 0) {
			std::cout << "Not prime" << std::endl;
			return 0;
		}
	}

	std::cout << "Prime";
}