#include <stdio.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 != NULL) {
        return mx_strdup(s2);
    }
    if (s1 != NULL && s2 == NULL) {
        return mx_strdup(s1);
    }
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }
    char *temp = mx_strnew(mx_strlen(s1) + mx_strlen(s2) + 1);
    temp = mx_strcat(mx_strdup(s1), s2);
    return temp;
}

