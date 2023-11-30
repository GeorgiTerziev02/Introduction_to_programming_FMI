#include <iostream>

void printSubset(const int* arr, unsigned length, unsigned mask) {
	std::cout << "{ ";
	for (unsigned i = 0; i < length; i++) {
		// if the i-th bit of the mask is 1
		// then the i-th element of the array is in the subset
		if (mask % 2 != 0) {
			std::cout << arr[i] << " ";
		}
		// /= 2
		mask >>= 1;
	}
	std::cout << "}" << std::endl;
}

void printSubsets(const int* arr, unsigned length) {
	// every set has 2^N subsets
	unsigned subsetsCount = 1 << length;
	// every number from 0 to 2^N is a mask of a subset
	// because every number has a different binary representation
	for (unsigned i = 0; i < subsetsCount; i++) {
		printSubset(arr, length, i);
	}
}

int main() {
	const unsigned LENGTH = 5;
	int arr[LENGTH] = { 1, 2, 3, 4, 5 };

	printSubsets(arr, LENGTH);
}