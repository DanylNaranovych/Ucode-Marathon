#include <time.h>
#include <stdio.h>

double mx_timer(void (*f)()) {
    double start;
    double end;
    start = clock();
    (*f)();
    end = clock();
    return (end - start) / CLOCKS_PER_SEC;
}
