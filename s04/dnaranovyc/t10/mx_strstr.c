#include <stdio.h>

char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
    char c;
    char sc;
    int len;
    if ((c = *s2++) != 0) {
        len = mx_strlen(s2);
        do {
            do {
                if ((sc = *s1++) == 0)
                    return (NULL);
            } while (sc != c);
        } while (mx_strncmp(s1, s2, len) != 0);
        s1--;
    }
    return ((char *)s1);
}
