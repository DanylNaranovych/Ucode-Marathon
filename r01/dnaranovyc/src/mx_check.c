#include "../inc/header.h"

void mx_check(char *o1, char *o2, char *res, bool *o1_b, bool *o2_b, bool *res_b) {
    if (o1[0] == '?') {
        *o1_b = true;
    } else {
        *o1_b = false;
    }
    if (o2[0] == '?') {
        *o2_b = true;
    } else {
        *o2_b = false;
    }
    if (res[0] == '?') {
        *res_b = true;
    } else {
        *res_b = false;
    }
}
