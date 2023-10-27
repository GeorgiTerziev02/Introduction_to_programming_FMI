#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	int tempA = a, tempB = b;

	while (tempB != 0) {
		int temp = tempA % tempB;
		tempA = tempB;
		tempB = temp;
	}

	int gcd = tempA;

	int lcm = a * b / gcd;
	std::cout << lcm;
}