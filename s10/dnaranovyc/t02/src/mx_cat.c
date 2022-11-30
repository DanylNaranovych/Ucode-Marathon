#include "../inc/header.h"

int main(int argc, char *argv[]) {
    char c;
    if (argc == 1)
        while (read(0, &c, 1))
            write(1, &c, 1);
    for (int i = 1; i < argc; i++) {
    int file = open(argv[i], O_RDONLY);
    if (file < 0) {
        mx_printstr("mx_cat: ");
        mx_printerr(argv[i]);
        mx_printstr(": No such file or directory\n");
        return -1;
    } else {
        while (read(file, &c, 1))
            write(1, &c, 1);
    }
    close(file); 
    }
    return 0;
}
