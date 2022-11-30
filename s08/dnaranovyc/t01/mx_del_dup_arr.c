#include "duplicate.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src == NULL) {
        return NULL;
    }
    t_intarr *temp = NULL;
    temp = (t_intarr *)malloc(sizeof(t_intarr));
    for (int m = 0; m < src->size; m++) {
        for (int i = m + 1; i < src->size; i++) {
            if (src->arr[m] == src->arr[i]) {
                for (int k = i; k < src->size - 1; k++) {
                    src->arr[k] = src->arr[k + 1];
                }
                src->size--;
                if (src->arr[m] == src->arr[i]) {
                    i--;
                }
            }
        }
    }
    temp->size = src->size;
    temp->arr = (int *)malloc(sizeof(int) * temp->size);
    temp->arr = mx_copy_int_arr(src->arr, temp->size);
    return temp;
}

