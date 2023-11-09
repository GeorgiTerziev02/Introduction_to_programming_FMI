#include <iostream>

void printArray(int* arr, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}