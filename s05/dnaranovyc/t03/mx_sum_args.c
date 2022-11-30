#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

void mx_sum_args(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += mx_atoi(argv[i]);
    }
    mx_printint(sum);
}

int main(int argc, char *argv[]) {
    mx_sum_args(argc, argv);
}
