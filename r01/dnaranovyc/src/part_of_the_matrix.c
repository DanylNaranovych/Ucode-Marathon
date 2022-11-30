#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]");
        return -1;
    }
    char *op = mx_strtrim(argv[2]);
    char *o1_c = mx_strtrim(argv[1]);
    char *o2_c = mx_strtrim(argv[3]);
    char *res_c = mx_strtrim(argv[4]);
    bool o1_b = false;
    bool o2_b = false;
    bool res_b = false;
    if (mx_check_err(o1_c, o2_c, op, res_c) == true) {
        return -1;
    }
    mx_check(o1_c, o2_c, res_c, &o1_b, &o2_b, &res_b);
    if (mx_strncmp(op, "*", 1) == 0) {
        mx_mul(o1_c, o2_c, op, res_c, o1_b, o2_b, res_b);
    } else if (mx_strncmp(op, "/", 1) == 0) {
        mx_div(o1_c, o2_c, op, res_c, o1_b, o2_b, res_b);
    } else if (mx_strncmp(op, "+", 1) == 0) {
        mx_add(o1_c, o2_c, op, res_c, o1_b, o2_b, res_b);
    } else if (mx_strncmp(op, "-", 1) == 0) {
        mx_sub(o1_c, o2_c, op, res_c, o1_b, o2_b, res_b);
    }
    return 0;
}
