#include "../inc/header.h"

void mx_print3(char *file, int *words, int *line, int *size) {
    char *str = mx_file_to_str(file);
    int count_words = mx_count_words(str, '\n');
    *words += count_words;
    int count_lines = mx_count_words(str, '\n');
    *line += count_lines;
    int new_size = mx_strlen(str);
    *size += new_size;
    mx_printstr("\t");
    mx_printint(count_lines + 1);
    mx_printstr("\t");
    mx_printint(count_words);
    mx_printstr("\t");
    mx_printint(new_size);
    mx_printchar(' ');
    mx_printstr(file);
    mx_printchar('\n');
}
