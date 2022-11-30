int mx_atoi(const char *str) {
    int i = 0;
    int res = 0;
    int temp = 0;
    if (str[0] == '-') {
        i++;
        temp = 1;
    }
    for (; str[i] != '\0'; ++i) {
        res = res * 10 + str[i] - '0';
    }
    if (temp == 1) {
        res *= -1;
    }
    return res;
}
