#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void mx_printchar(char c) {
  write(1, &c, 1);
}
void mx_printint(int n) {
    int temp = n;
    int amount = 0;
    if (n == 0) {
        mx_printchar(48);
    }
	while (n != 0) {
		n = n / 10;
		amount++;
	}
    char temp1[amount];
    for (int i = 0; i < amount; i++) {
        temp1[i] = temp % 10 + 48;
        temp /= 10;
    }
    for (int i = amount - 1; i >= 0; i--) {
        mx_printchar(temp1[i]);
    }
    mx_printchar('\n');
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

void mx_print_name(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
}

int main(int argc, char *argv[]) {
    mx_print_name(argc, argv);
}
