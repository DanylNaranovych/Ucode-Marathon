#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL) {
        return NULL;
    }
    int *ptr = (int*)malloc(size * 4);
    for (int i = 0; i < size; i++) {
        *(ptr + i) = *(src + i);
    }
    return ptr;
}

