#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
  int buff = 0;
  for (int i = 0; i < size - 1; i++) {
    for (int j = size - 1; j > i; j--) {
      if (f(arr[j - 1], arr[j])) {
        buff = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = buff;
      }
    }
  }
}

