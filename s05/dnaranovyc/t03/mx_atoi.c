#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    long long int res = 0;
    int i = 0;
    int sign = 0;
    if (str[0] == '-') {
        sign = 1;
        i++;
    }
    if (str[0] == '+') {
        i++;
    }
    for (; mx_isdigit(str[i]) == 1; i++) {
        if(mx_isspace(str[i]) != 1) {
            res = res * 10 + str[i] - '0';
        }
    }
    if (str[0] == '-' || str[0] == '+') {
        i = 1;
    } else {
        i = 0;
    }
    for (; str[i] != '\0'; i++) {
        if (mx_isdigit(str[i]) != 1) {
            res = 0;
        }
    }
    if (sign == 1) res = -res;
    return res;
}
