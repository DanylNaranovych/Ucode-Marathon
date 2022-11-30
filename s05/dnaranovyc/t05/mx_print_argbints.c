#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

void mx_print_argbints(int argc, char *argv[]) {
  int arr[argc - 1];
  int temp = 1;
  for (int i = 0; i < argc - 1; i++) {
    arr[i] = mx_atoi(argv[temp]);
    temp++;
  }
  for (int i = 0; i < argc - 1; i++) {
    unsigned j;
    for (j = 1 << 31; j > 0; j = j / 2) {
      (arr[i] & j) ? mx_printchar('1') : mx_printchar('0');
    }
    mx_printchar('\n');
  }
}

int main(int argc, char *argv[]) {
    mx_print_argbints(argc, argv);
    return 0;
}
