#include <stdbool.h>

int mx_sqrt(int x) {
    int quotient = 0;
    int i = 0;
    bool resultfound = false;
    while (resultfound == false) {
        if (i*i == x) {
          quotient = i;
          resultfound = true;
        }
        i++;
        if (i == x) {
            return 0;
        }
    }
    return quotient;
}

#include <stdio.h>

int main() {
    printf("%d", mx_sqrt(4));
}
