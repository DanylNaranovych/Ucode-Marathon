#include "../inc/calculator.h"

int mx_add(int a, int b) { return a + b; }
int mx_sub(int a, int b) { return a - b; }
int mx_mul(int a, int b) { return a * b; }
int mx_div(int a, int b) { return a / b; }
int mx_mod(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return a % b;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        mx_printstr("usage: ./calc [operand1] [operation] [operand2]");
        return 0;
    }
    enum e_operation oper;
    enum e_error err;
    int num1 = mx_atoi(argv[1]);
    int num2 = mx_atoi(argv[3]);
    if (num1 <= -65535 || num2 <= -65535) {
        err = INCORRECT_OPERAND;
    }
    for (int i = 0; argv[1][i] < mx_strlen(argv[1]); i++) {
        if (mx_isdigit(argv[1][i]) != 1) {
            err = INCORRECT_OPERAND;
            mx_printerr("error: invalid number");
            return -1;
        }
    }
    for (int i = 0; argv[3][i] < mx_strlen(argv[3]); i++) {
        if (mx_isdigit(argv[3][i]) != 1) {
            err = INCORRECT_OPERAND;
            mx_printerr("error: invalid number");
            return -1;
        }
    }
    if (mx_strncmp(argv[2], "+", 1) == 0) {
        oper = ADD;
    } else if (mx_strncmp(argv[2], "-", 1) == 0) {
        oper = SUB;
    } else if (mx_strncmp(argv[2], "*", 1) == 0) {
        oper = MUL;
    } else if (mx_strncmp(argv[2], "/", 1) == 0) {
        oper = DIV;
    } else if (mx_strncmp(argv[2], "%%", 1) == 0) {
        oper = MOD;
    } else {
        err = INCORRECT_OPERATION;
        mx_printstr("error: invalid operation");
        return -1;
    }
    if (oper == DIV && num2 == 0) {
        err = DIV_BY_ZERO;
        mx_printstr("error: division by zero");
        return -1;
    }
    if (err == INCORRECT_OPERAND) {
        mx_printstr("error: invalid number");
        return -1;
    }
    if (oper == ADD) {
        mx_printint(mx_add(num1, num2));
    } else if (oper == SUB) {
        mx_printint(mx_sub(num1, num2));
    } else if (oper == MUL) {
        mx_printint(mx_mul(num1, num2));
    } else if (oper == DIV) {
        mx_printint(mx_div(num1, num2));
    } else if (oper == MOD) {
        mx_printint(mx_mod(num1, num2));
    }
    return 0;
}
