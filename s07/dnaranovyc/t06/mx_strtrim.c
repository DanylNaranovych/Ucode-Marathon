#include <stdbool.h>
#include <malloc.h>

char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);
bool mx_isspace(char c);

char *mx_strtrim(const char *str) {
    if (str == NULL) return NULL;
    int act_size = mx_strlen(str);
    int i = 0;
    int k = act_size;
    while (mx_isspace(*(str + i)) == 1) {
        act_size--;
        i++;
    }
    while (mx_isspace(*(str + k)) == 1) {
        act_size--;
        k--;
    }
    char *temp = mx_strnew(act_size);
    mx_strncpy(temp, &str[i], act_size + 1);
    return temp;
}