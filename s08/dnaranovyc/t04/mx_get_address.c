#include "get_address.h"

char *mx_get_address(void *p) {
    char *s = mx_nbr_to_hex((long)&p);
    int size = mx_strlen(s);
    char *res = mx_strnew(size + 2);
    *(res + 0) = '0';
    *(res + 1) = 'x';
    mx_strcpy(&(*(res + 2)), s);
    return res;
}
