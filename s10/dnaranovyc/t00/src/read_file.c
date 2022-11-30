#include "../inc/header.h"

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
