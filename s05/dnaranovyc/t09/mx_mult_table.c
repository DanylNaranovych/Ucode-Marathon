#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

void mx_mult_table(int argc, char *argv[]) {
    if (argc != 3) {
        return;
    }
    int size = 0;
    int low;
    int temp;
    if (mx_atoi(argv[1]) > mx_atoi(argv[2])) {
        size = mx_atoi(argv[1]) - mx_atoi(argv[2]) + 1;
        low = mx_atoi(argv[2]);
    } else {
        size = mx_atoi(argv[2]) - mx_atoi(argv[1]) + 1;
        low = mx_atoi(argv[1]);
    }
    argv = 0;
    argv++;
    unsigned short multi_table[size][size]; //таблица содержится в двумерном массиве
    multi_table[0][0] = low * low;
    for (int i = 1; i < size; i++) {
        multi_table[i][0] = multi_table[i - 1][0] + low;
    }
    for (int i = 0; i < size; i++) {         //создание таблицы
        for (int j = 0; j < size; j++) {
            if (j == 0) {
                temp = multi_table[i][j];
                j++;
            }
            multi_table[i][j] = temp + low;
            temp = multi_table[i][j];
        }
        low++;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == size - 1) {
                mx_printint(multi_table[i][j]);
            } else {
                mx_printint(multi_table[i][j]);
                mx_printchar('\t');
            }
        }
        mx_printchar('\n');
    }
}

int main(int argc, char *argv[]) {
    mx_mult_table(argc, argv);
}
