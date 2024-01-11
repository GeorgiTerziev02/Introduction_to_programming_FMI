bool linearSearch(const int* arr, size_t size, int target) {
	if (size == 0) {
		return false;
	}

	return *arr == target || linearSearch(arr + 1, size - 1, target);
}