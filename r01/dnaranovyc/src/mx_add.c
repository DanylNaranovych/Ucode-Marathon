#include "../inc/header.h"

void mx_add(char *o1, char *o2, char *op, char *res, bool o1_b, bool o2_b, bool res_b) {
    int min_o1;
    int min_o2;
    int min_res;
    int max_o1;
    int max_o2;
    int max_res;
    int o1_i = 0;
    int o2_i = 0;
    int res_i = 0;
    if (o1_b == true && mx_strlen(o1) == 1) {
        min_o1 = 0;
        max_o1 = 10;
    } else if (o1_b == true && mx_strlen(o1) > 1) {
        min_o1 = mx_pow(10, mx_strlen(o1) - 1);
        max_o1 = mx_pow(10, mx_strlen(o1));
    } else if (o1_b == false) {
        o1_i = mx_atoi(o1);
    }
    if (o2_b == true && mx_strlen(o2) == 1) {
        min_o2 = 0;
        max_o2 = 10;
    } else if (o2_b == true && mx_strlen(o2) > 1) {
        min_o2 = mx_pow(10, mx_strlen(o2) - 1);
        max_o2 = mx_pow(10, mx_strlen(o2));
    } else if (o2_b == false) {
        o2_i = mx_atoi(o2);
    }
    if (res_b == true && mx_strlen(res) == 1) {
        min_res = 0;
        max_res = 10;
    } else if (res_b == true && mx_strlen(res) > 1) {
        min_res = mx_pow(10, mx_strlen(res) - 1);
        max_res = mx_pow(10, mx_strlen(res));
    } else if (res_b == false) {
        res_i = mx_atoi(res);
    }
    if (o1_b == false && o2_b == false && res_b == false) {
        if (o1_i + o2_i == res_i) {
            mx_print(o1_i, o2_i, op, res_i);
        }
    }
    if (o1_b == true && o2_b == false && res_b == false) {
        for (o1_i = min_o1; o1_i < max_o1; o1_i++) {
            if (o1_i + o2_i == res_i) {
                mx_print(o1_i, o2_i, op, res_i);
            }
        }
    }
    if (o1_b == false && o2_b == true && res_b == false) {
        for (o2_i = min_o2; o2_i < max_o2; o2_i++) {
            if (o1_i + o2_i == res_i) {
                mx_print(o1_i, o2_i, op, res_i);
            }
        }
    }
    if (o1_b == true && o2_b == true && res_b == false) {
        for (o1_i = min_o1; o1_i < max_o1; o1_i++) {
            for (o2_i = min_o2; o2_i < max_o2; o2_i++) {
                if (o1_i + o2_i == res_i) {
                    mx_print(o1_i, o2_i, op, res_i);
                }   
            }
        }
    }
    if (o1_b == false && o2_b == false && res_b == true) {
        for (res_i = min_res; res_i < max_res; res_i++) {
            if (o1_i + o2_i == res_i) {
                mx_print(o1_i, o2_i, op, res_i);
            }
        }
    }
    if (o1_b == true && o2_b == false && res_b == true) {
        for (o1_i = min_o1; o1_i < max_o1; o1_i++) {
            for (res_i = min_res; res_i < max_res; res_i++) {
                if (o1_i + o2_i == res_i) {
                    mx_print(o1_i, o2_i, op, res_i);
                }
            } 
        }
    }
    if (o1_b == false && o2_b == true && res_b == true) {
        for (o2_i = min_o2; o2_i < max_o2; o2_i++) {
            for (res_i = min_res; res_i < max_res; res_i++) {
                if (o1_i + o2_i == res_i) {
                    mx_print(o1_i, o2_i, op, res_i);
                }
            } 
        }
    }
    if (o1_b == true && o2_b == true && res_b == true) {
        for (o1_i = min_o1; o1_i < max_o1;  o1_i++) {
            for (o2_i = min_o2; o2_i < max_o2; o2_i++) {
                for (res_i = min_res; res_i < max_res; res_i++) {
                    if (o1_i + o2_i == res_i) {
                        mx_print(o1_i, o2_i, op, res_i);
                    }
                } 
            } 
        }
    }
}
