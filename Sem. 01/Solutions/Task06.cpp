#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

    int expr1 = a + b;
    int expr2 = a - b;

	int result = expr1 * expr1 * expr1 * expr1 - expr2 * expr2;

	std::cout << result;
}