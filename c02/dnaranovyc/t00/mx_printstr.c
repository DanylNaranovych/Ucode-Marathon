#include <unistd.h>

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
