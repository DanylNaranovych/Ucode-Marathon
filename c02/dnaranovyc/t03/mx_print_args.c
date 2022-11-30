#include <unistd.h>

void mx_printchar(char c) {
  write(1, &c, 1);
}
int mx_strlen(const char *s) {
    int temp = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        temp++;
    }
    return temp;
}
void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

void mx_print_args(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

int main(int argc, char *argv[]) {
    mx_print_args(argc, argv);
}
