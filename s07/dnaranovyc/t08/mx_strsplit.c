#include <stdio.h>
#include <stdlib.h>

int mx_count_words(const char *str, char delimiter);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_strdel(char **str);
char *mx_strnew(const int size);

char **mx_strsplit(char const *s, char c) {
    char **arr = (char**)malloc((mx_count_words(s, c)) * 50);
    int j = 0;
    int count = 0;
    if (s == NULL) return NULL;
    for (int i = 0; i < mx_count_words(s, c); i++) {
        while (*(s + j) == c)
            j++;
        while(*(s + j + count) != c)
            count++;
        *(arr + i) = (char *)malloc(count);
        mx_strncpy(*(arr + i), &s[j], count);
        j += count;
        count = 0;
    }
    return arr;
}

