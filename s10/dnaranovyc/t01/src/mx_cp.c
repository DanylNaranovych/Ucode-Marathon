#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        mx_printstr("usage: ./mx_cp [source_file] [destination_file]");
        return 0;
    }
    int file1 = open(argv[1], O_RDWR);
    int file2 = open(argv[2], O_RDWR);
    if (file1 < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        return -1;
    }
    char c;
    while (read(file1, &c, 1)) {
        write(file2, &c, 1);
    }
    close(file1);
    close(file2);
    return 0;
}
