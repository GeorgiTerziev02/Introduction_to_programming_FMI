#include <iostream>

int getSeparationIndex(const int* arr, size_t size) {
	if (!arr) {
		return -1;
	}
	for (size_t i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return i + 1;
		}
	}

	return -1;
}

int* mergeSortedArrays(
	const int* first,
	size_t firstLength,
	const int* second,
	size_t secondLength
) {
	if (!first || !second) {
		return nullptr;
	}

	int* result = new int[firstLength + secondLength];
	size_t firstIndex = 0, secondIndex = 0, resultIndex = 0;

	while (firstIndex < firstLength && secondIndex < secondLength) {
		if (first[firstIndex] < second[secondIndex]) {
			result[resultIndex++] = first[firstIndex++];
		}
		else {
			result[resultIndex++] = second[secondIndex++];
		}
	}

	while (firstIndex < firstLength) {
		result[resultIndex++] = first[firstIndex++];
	}

	while (secondIndex < secondLength) {
		result[resultIndex++] = second[secondIndex++];
	}

	return result;
}

void copyTo(const int* source, int* destination, size_t size) {
	if (!source || !destination) {
		return;
	}

	for (size_t i = 0; i < size; i++) {
		destination[i] = source[i];
	}
}

void sortConcatenationOfSortedArrays(int* arr, size_t size) {
	if (!arr) {
		return;
	}

	int separationIndex = getSeparationIndex(arr, size);
	if (separationIndex == -1) {
		return;
	}

	int* sorted = mergeSortedArrays(
		arr,
		separationIndex,
		arr + separationIndex,
		size - separationIndex
	);

	copyTo(sorted, arr, size);
	delete[] sorted;
}

void print(const int* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	const size_t SIZE = 8;
	int arr[SIZE] = { 4, 5, 6, 7, 1, 2, 3, 8 };

	sortConcatenationOfSortedArrays(arr, SIZE);

	// 1 2 3 4 5 6 7 8
	print(arr, SIZE);
}