#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	std::cout << a;
}
