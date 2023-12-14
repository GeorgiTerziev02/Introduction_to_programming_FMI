size_t myStrLength(const char* str) {
	if (!str) {
		return 0;
	}

	size_t index = 0;
	while (str[index]) {
		index++;
	}

	return index;
}
