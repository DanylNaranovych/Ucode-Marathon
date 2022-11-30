#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>

int mx_strlen(const char *s) {
    int temp = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        temp++;
    }
    return temp;
}
void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
    write(1, "\n", 1);
}
void mx_printerr(const char*s) {
    write(2, s, mx_strlen(s));
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        mx_printstr("usage: ./read_file [file_path]\n");
        return 0;
    }
    int file = open(argv[1], O_RDONLY);
    if (file == -1) {
        mx_printerr("error\n");
        return -1;
    }
    char c;
    while ((read(file, &c, 1) == 1)) {
        write(1, &c, 1);
        if (c == '\n') {
            close(file);
            return 0;
        }
    }
    close(file);
    return 0;
}
