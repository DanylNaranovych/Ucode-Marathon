int mx_mid(int a, int b, int c) {
    int temp1, temp2;
    if (a > b) {
        temp1 = a;
    } else {
        temp1 = b;
    }
    if (temp1 > c) {
        return temp1;
    } else {
        return c;
    }
    if (a < b) {
        temp2 = a;
    } else {
        temp2 = b;
    }
    if (temp2 < c) {
        return temp2;
    } else {
        return c;
    }
    return a + b + c - temp1 - temp2;
}
