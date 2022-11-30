#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size <= 0) {
        return NULL;
    }
    char *str = (char*)malloc(size + 1);
    for (int i = 0; i < size + 1; i++) {
        str[i] = '\0';
    }
    return str;
}
int mx_strlen(const char *s) {
    int temp = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        temp++;
    }
    return temp;
}
char *mx_strcpy(char *dst, const char *src) {
    if (dst == NULL) {
        return NULL;
    }
    char *ptr = dst;
    while (*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return ptr;
}

char *mx_strdup(const char *str) {
	char *copy;
	if (!(copy = mx_strnew(mx_strlen(str) + 1)))
		return (NULL);
	mx_strcpy(copy, str);
	return (copy);
}

