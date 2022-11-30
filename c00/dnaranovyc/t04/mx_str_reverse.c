void mx_str_reverse(char *s) {
    int temp = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        temp++;
    }
    for (int i = 0; i < temp; i++) {
        char c = s[i];
        s[i] = s[temp];
        s[temp] = c;
        temp--;
    }
}
