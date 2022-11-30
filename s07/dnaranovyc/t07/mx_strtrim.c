#include <stdbool.h>
#include <stdio.h>

char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);
bool mx_isspace(char c);

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    int act_size = 0;
    int size = mx_strlen(str);
    for (int i = 0; i < size; i++) {
        if (mx_isspace(str[i]) == 1 && mx_isspace(str[i + 1]) != 1) {
            act_size++;
        } else if (mx_isspace(str[i]) == 1 && mx_isspace(str[i + 1]) == 1) {
            i++;
        } else if (mx_isspace(str[i]) != 1) {
            act_size++;
        }
    }
    int count = 0;
    while (mx_isspace(str[count]) == 1) {
        count++;
    }
    char *temp_c = mx_strnew(size - count);
    mx_strncpy(temp_c, &str[count], size - count);
    return temp_c;
}

