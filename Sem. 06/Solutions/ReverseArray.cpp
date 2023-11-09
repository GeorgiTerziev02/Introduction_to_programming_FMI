void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void reverseArray(int* arr, unsigned length) {
	for (int i = 0; i < length / 2; i++) {
		swap(arr[i], arr[length - i - 1]);
	}
}
