
#include <unistd.h>

void mx_printint(int n) {
    if (n == 0) {
        write(1, "0", 1);
        write(1, "\n", 2);
        return;
    }
    if (n < 0) {
        write(1, "-", 1);
        n *= -1;
    }
    int temp = n;
    int amount = 0;
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
        write(1, &temp1[i], 1);
    }
    write(1, "\n", 2);
}
