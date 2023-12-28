#include <iostream>

int dynamicMemoryTest() {
	int length;
	std::cin >> length;

	// ptr in the stack, pointing to just a int in the heap
	int* intPtr = new int(5);
	// ptr in the stack, pointing to arr of ints in the heap
	int* arr = new int[length];
	
	// !!!
	delete intPtr;
	delete[] arr;
}

int* functionReturningDynamicArray() {
	int length;
	std::cin >> length;

	int* arr = new int[length];
	arr[0] = 1;
	arr[1] = 5;
	return arr;
}

int main() {
	dynamicMemoryTest();
	int* arr = functionReturningDynamicArray();
	std::cout << arr[0] << " " << arr[1];
	delete[] arr;
}
