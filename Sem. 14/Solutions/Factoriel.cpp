size_t fact(size_t n) {
    if (n == 0) {
        return 1;
    }

    return n * fact(n - 1);
}