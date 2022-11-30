int mx_pow(int n, unsigned int pow) {
    int temp = n;
    if (pow == 0) {
        return 1;
    }
    for (unsigned int i = 1; i < pow; i++) {
        n *= temp;
    }
    return n;
}
