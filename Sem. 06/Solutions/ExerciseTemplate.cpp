#include <iostream>

void readArray(int* arr, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cin >> arr[i];
	}
}

void printArray(int* arr, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

const unsigned MAX_SIZE = 1024;

int main() {
	int arr[MAX_SIZE];

	// 1 <= length <= MAX_SIZE 
	int length;
	std::cin >> length;

	// check if length is valid

	readArray(arr, length);
	
	// Do sth

	printArray(arr, length);
}