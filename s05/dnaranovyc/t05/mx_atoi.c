#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    long long int res = 0;
    int i = 0;
    int sign = 0;
    while (str[i] == ' ') {
        i++;
    }
    if (str[i] == '-') {
        sign = 1;
        i++;
    }
    if (str[i] == '+') {
        i++;
    }
    for (; mx_isdigit(str[i]) == 1; i++) {
        if(mx_isspace(str[i]) != 1) {
            res = res * 10 + str[i] - '0';
        }
    }
    if (sign == 1) { res = -res; }
    return res;
}
