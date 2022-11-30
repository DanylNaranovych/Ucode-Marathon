#include "../inc/header.h"

void mx_print(int o1, int o2, char *op, int res) {
    mx_printint(o1);
    mx_printchar(' ');
    mx_printstr(op);
    mx_printchar(' ');
    mx_printint(o2);
    mx_printstr(" = ");
    mx_printint(res);
    mx_printchar('\n');
}
