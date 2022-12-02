int mx_factorial_iter(int n) {
    if (n < 0 || n >= 2147483647) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

