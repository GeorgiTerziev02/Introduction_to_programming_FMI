size_t fibonacci(size_t n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}