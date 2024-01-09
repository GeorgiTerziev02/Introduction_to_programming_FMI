#include <iostream>

void print(int* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	const int size = 10;
	int arr[size] = { 5, 3, 2, 6, 4, 7, 9, 10, 1, 8 };
    
    // Place here your sorting function

	print(arr, size);
}