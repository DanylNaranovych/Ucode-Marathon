#include <unistd.h>

void mx_printstr(const char *s) {
    int temp = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        temp++;
    }
    write(1, s, temp);
    write(1, "\n", 2);
}
