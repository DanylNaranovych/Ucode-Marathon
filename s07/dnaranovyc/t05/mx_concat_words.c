#include <stdio.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);
int mx_strlen(const char *s);

char *mx_concat_words(char **words) {
    if (words == NULL) {
        return NULL;
    }
    int count = 0;
    int temp_i = 0;
    for (int i = 0; words[i] != NULL; i++) {
        temp_i += mx_strlen(words[i]);
        count++;
    }
    char *temp_c = mx_strnew(temp_i + count - 1);
    for (int i = 0; words[i] != NULL; i++) {
        temp_c = mx_strjoin(temp_c, words[i]);
        if (i != count - 1) {
            temp_c = mx_strjoin(temp_c, " ");
        }
    }
    return temp_c;
    mx_strdel(&temp_c);
}
