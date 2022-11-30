#include <stdbool.h>

bool mx_is_prime(int num) {
    int i = 1;
    int count = 0;
    while (i <= num) {
        if (num % i == 0) {
        count++;
        }
        i++;
    }
    if (count == 2) {
        return true;
    } else {
        return false;
    }
}
