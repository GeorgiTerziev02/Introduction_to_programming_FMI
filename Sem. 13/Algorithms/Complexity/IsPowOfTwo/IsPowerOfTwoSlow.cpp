bool isPowerOfTwoSlow(size_t number) {
    while(number != 0) {
        if(number % 2 == 1) {
            return false;
        }

        number /= 2;
    }

    return true;
}