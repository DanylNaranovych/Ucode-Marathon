void mx_printstr(const char *s);

void mx_is_positive(int i) {
    if (i < 0) {
        char str1[] = "negative";
        mx_printstr(str1);
    }
    if (i > 0) {
        char str2[] = "positive";
        mx_printstr(str2);
    }
    if (i == 0) {
        char str3[] = "zero";
        mx_printstr(str3);
    }
    mx_printstr("\n");
}
