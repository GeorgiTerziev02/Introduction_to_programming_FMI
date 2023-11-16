void selectionSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int minElementIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minElementIndex]) {
				minElementIndex = j;
			}
		}

		if (i != minElementIndex) {
			swap(arr, i, minElementIndex);
		}
	}
}
