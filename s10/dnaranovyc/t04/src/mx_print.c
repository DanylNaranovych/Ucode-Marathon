#include "../inc/header.h"

void mx_print(char *file) {
    char *str = mx_file_to_str(file);
    int count_words = mx_count_words(str, '\n');
    int count_lines = mx_count_words(str, '\n');
    int size = mx_strlen(str);
    mx_printstr("\t");
    mx_printint(count_lines + 1);
    mx_printstr("\t");
    mx_printint(count_words);
    mx_printstr("\t");
    mx_printint(size);
    mx_printchar(' ');
    mx_printstr(file);
    mx_printchar('\n');
}
