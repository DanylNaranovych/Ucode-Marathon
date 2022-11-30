#include "../inc/header.h"

int main(int argc, char *argv[]) {
    char c;
    int words = 0;
    int line = 0;
    int total_size = 0;
    int j = 0;
    char *str = mx_strnew(50);
    if (argc == 1) {
        while (read(0, &c, 1)) {
            str[j] = c;
            j++;
            if (c == 4)
                break;
        }
        int count_words = mx_count_words(str, '\n');
        int count_lines = mx_count_words(str, '\n');
        int size = mx_strlen(str);
        mx_printstr("\t");
        mx_printint(count_lines);
        mx_printstr("\t");
        mx_printint(count_words);
        mx_printstr("\t");
        mx_printint(size);
        mx_printchar('\n');
    }
    for (int i = 1; i < argc; i++) {
        int file = open(argv[i], O_RDONLY);
        if (file < 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": ");
            mx_printerr(strerror(2));
            mx_printerr("\n");
            return -1;
        } else if (argc == 2) {
            mx_print(argv[i]);
        } else if (argc >= 3) {
            mx_print3(argv[i], &words, &line, &total_size);
        }
        close(file);
    }
    if (argc >= 3) {
    mx_printstr("\t");
    mx_printint(line);
    mx_printstr("\t");
    mx_printint(words);
    mx_printstr("\t");
    mx_printint(total_size);
    mx_printchar(' ');
    mx_printstr("total");
    mx_printchar('\n');
    }
    return 0;
}
