#include "../inc/header.h"

bool mx_check_err(char *o1, char *o2, char *op, char *res) {
    if (mx_strlen(op) > 1) {
        mx_printerr("Invalid operation: ");
        mx_printerr(op);
        mx_printerr("\n");
        return true;
    }
    if ((mx_strncmp(op, "+", 1) != 0) && (mx_strncmp(op, "-", 1) != 0) && (mx_strncmp(op, "*", 1) != 0) && (mx_strncmp(op, "/", 1) != 0) && (mx_strncmp(op, "?", 1) != 0)) {
        mx_printerr("Invalid operation: ");
        mx_printerr(op);
        mx_printerr("\n");
        return true;
    }
    for (int i = 0; i < mx_strlen(o1); i++) {
        if ((mx_isdigit(o1[i]) != 1) && (o1[i] != '?')) {
            mx_printerr("Invalid operand: ");
            mx_printerr(o1);
            mx_printerr("\n");
            return true;
        }
    }
    for (int i = 0; i < mx_strlen(o2); i++) {
        if ((mx_isdigit(o2[i]) != 1) && (o2[i] != '?')) {
            mx_printerr("Invalid operand: ");
            mx_printerr(o2);
            mx_printerr("\n");
            return true;
        }
    }
    for (int i = 0; i < mx_strlen(res); i++) {
        if ((mx_isdigit(res[i]) != 1) && (res[i] != '?')) {
            mx_printerr("Invalid result: ");
            mx_printerr(res);
            mx_printerr("\n");
            return true;
        }
    }
    return false;
}
