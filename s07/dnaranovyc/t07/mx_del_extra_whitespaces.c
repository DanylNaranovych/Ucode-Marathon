#include <stdbool.h>
#include <stdio.h>

char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str) {
    return mx_strtrim(str);
}

