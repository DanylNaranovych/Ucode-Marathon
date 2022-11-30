#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int remainder;
    int amount = 0;
    int result = 0;
    int originalNum = num;
    int temp = num;
    while (temp != 0) {
        temp = temp / 10;
        amount++;
    }
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += mx_pow(remainder, amount);
        originalNum /= 10;
    }
    if (result == num) {
        return true;
    } else {
        return false;
    }
}
