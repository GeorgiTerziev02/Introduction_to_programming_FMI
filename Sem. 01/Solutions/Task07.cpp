#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int b100 = n / 100;
	n %= 100;

	int b50 = n / 50;
	n %= 50;
	// TODO: ... 20 10 5 3 2 1
	std::cout << b100 << "x100lv " << b50; // TODO:  << ... 
}