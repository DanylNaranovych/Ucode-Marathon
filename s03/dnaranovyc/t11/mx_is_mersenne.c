#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n) {
    if (n == 0) {
        return 0;
    }
    int n1 = n + 1;
    int p = 0;
    for (int i = 0;; i++) {
        p = (int)mx_pow(2, i);
        if (p > n1) {
            break;
        } else if (p == n1) {
            if (mx_is_prime(n) == 1) {
                return 1;
            }
        }
    }
    return 0;
}
