#include <iostream>

void readArray(int* arr, unsigned length) {
	for (unsigned i = 0; i < length; i++) {
		std::cin >> arr[i];
	}
}