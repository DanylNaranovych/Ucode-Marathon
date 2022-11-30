int mx_max(int a, int b, int c) {
    int temp;
    if (a > b) {
        temp = a;
    } else {
        temp = b;
    }
    if (temp > c) {
        return temp;
    } else {
        return c;
    }
}
