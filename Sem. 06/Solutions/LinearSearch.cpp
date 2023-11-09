bool linearSearch(int* arr, unsigned length, int x) {
	for (unsigned i = 0; i < length; i++) {
		if (arr[i] == x) {
			return true;
		}
	}

	return false;
}