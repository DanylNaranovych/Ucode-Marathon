char *mx_strncpy(char *dst, const char *src, int len) {
    for (int i = 0; i < len; i++) {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return dst;
}
