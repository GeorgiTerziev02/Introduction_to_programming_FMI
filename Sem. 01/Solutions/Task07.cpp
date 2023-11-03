#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int b100 = n / 100;
	n %= 100;

	int b50 = n / 50;
	n %= 50;

	int b20 = n / 20;
	n %= 20;

	int b10 = n / 10;
	n %= 10;

	int b5 = n / 5;
	n %= 5;

	int b2 = n / 2;
	n %= 2;

	int b1 = n;
	std::cout << b100 << "x100lv "
			  << b50 << "x50lv "
			  << b20 << "x20lv "
			  << b10 << "x10lv "
			  << b5 << "x5lv "
			  << b2 << "x2lv "
			  << b1 << "x1lv" << std::endl;
}