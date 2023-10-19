#include<iostream>

int main() {
	int number;
	std::cin >> number;

	// 326
	int firstDigit = number / 100;
	int secondDigit = (number / 10) % 10;
	int thirdDigit = number % 10;
	// 3 2 6
	// 623 + 1
	int result = thirdDigit * 100 + secondDigit * 10 + firstDigit + 1;

	std::cout << result;
}