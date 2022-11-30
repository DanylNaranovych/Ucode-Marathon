void mx_arr_rotate(int *arr, int size, int shift) {
  if (shift == 0) {
    return;
  }
  if (shift > 0) {
    for (int i = 0; i < shift; i++) {
      int tmp = arr[size - 1];
      for (int j = size - 1; j >= 0; j--) {
        arr[j] = arr[j - 1];
      }
      arr[0] = tmp;
    }
  }
  if (shift < 0) {
    shift *= -1;
    for (int i = 0; i < shift; i++) {
      int tmp = arr[0];
      for (int j = 0; j < size - 1; j++) {
        arr[j] = arr[j + 1];
      }
      arr[size - 1] = tmp;
    }
  }
}

