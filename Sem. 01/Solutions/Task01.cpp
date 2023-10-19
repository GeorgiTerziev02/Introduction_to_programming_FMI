#include<iostream>

int main() {
	int number;
	std::cin >> number;
	
	bool isEven = (number % 2) == 0;
	std::cout << isEven;
}