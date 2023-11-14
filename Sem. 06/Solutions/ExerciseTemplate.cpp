#include <iostream>

const unsigned MAX_SIZE = 1024;

bool isValidLength(unsigned length) {
	return 0 < length && length <= MAX_SIZE;
}

void readArray(int* arr, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cin >> arr[i];
	}
}

void printArray(const int* arr, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	int arr[MAX_SIZE];

	// 1 <= length <= MAX_SIZE 
	unsigned length;
	do {
		std::cin >> length;
	} while(!isValidLength(length));

	readArray(arr, length);
	
	// Do sth

	printArray(arr, length);
}
