int binarySearch(const int* arr, int size, int x) {
	int leftIndex = 0, rightIndex = size - 1;

	while (leftIndex <= rightIndex) {
		// int midIndex = (leftIndex + rightIndex) / 2;
    // why the following is better
    int midIndex = leftIndex + (rightIndex - leftIndex) / 2;

		if (arr[midIndex] == x) {
			return midIndex;
		}
		else if (arr[midIndex] < x) {
			leftIndex = midIndex + 1;
		}
		else {
			rightIndex = midIndex - 1;
		}
	}

	return -1;
}
