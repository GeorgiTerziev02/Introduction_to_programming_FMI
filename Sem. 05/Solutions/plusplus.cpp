#include <iostream>

int& prefixPlusPlus(int& a) {
	a = a + 1;
	return a;
}

int suffixPlusPlus(int& a) {
	a = a + 1;
	return a - 1;
}

int main() {
	int a = 5;

	std::cout << prefixPlusPlus(a) << std::endl; // ++a
	std::cout << suffixPlusPlus(a) << std::endl; // a++

    prefixPlusPlus(a) = 5;
    // suffixPlusPlus(a) = 5; // error - cannot assign to rvalue

	return 0;
}