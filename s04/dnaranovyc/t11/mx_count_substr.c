char *mx_strstr(const char *s1, const char *s2);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);

int mx_count_substr(const char *str, const char *sub) {
    int len = mx_strlen(sub);
    int count = 0;

    const char *temp = str;

    if (len) 
    while ((temp = mx_strstr(temp, sub))) {
        temp += len;
        count++;
    }
    return count;
}
