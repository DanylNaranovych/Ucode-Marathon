#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable(void) {
    for (int i = 127; i >= 32; i--) {
            mx_printchar((char)i);
    }
    mx_printchar('\n');
}

#include <stdio.h>

int main() {
    mx_only_printable();
}
