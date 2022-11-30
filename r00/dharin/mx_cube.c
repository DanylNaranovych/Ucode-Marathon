void mx_printchar(char c);

void mx_cube(int n) {
    if (n <= 1) {
        return;
    }
  char cube[3 + n + (n / 2)][3 + (n / 2) + (n * 2)];
  int temp_fill = n / 2;
  int temp_pr = 0;
  int j = 0;
  int i = 0;
  for (i = 0; i <= 3 + n + (n / 2); i++) {
    if (i == 0) {
      for (; j < 1 + (n / 2); j++) {
        cube[i][j] = ' ';
      }
      for (; j < 2 + (n / 2); j++) {
        cube[i][j] = '+';
      }
      for (; j < 2 + (n / 2) + (n * 2); j++) {
        cube[i][j] = '-';
      }
      for (; j < 3 + (n / 2) + (n * 2); j++) {
        cube[i][j] = '+';
      }
    }
    if (i > 0 && i <= (n / 2)) {
      for (j = 0; j < 1 + (n / 2) - i; j++) {
        cube[i][j] = ' ';
      }
      for (; j < 2 + (n / 2) - i; j++) {
        cube[i][j] = '/';
      }
      for (; j < 2 + (n / 2) + (n * 2) - i; j++) {
        cube[i][j] = ' ';
      }
      for (; j < 3 + (n / 2) + (n * 2) - i; j++) {
        cube[i][j] = '/';
      }
      if (i == 1) {
        cube[i][2 + (n / 2) + (n * 2)] = '|';
      } else {
        for (; (j > 2 + (n / 2) + (n * 2) - i) && (j < 3 + (n / 2) + (n * 2));
             j++) {
          cube[i][j] = ' ';
        }
        cube[i][2 + (n / 2) + (n * 2)] = '|';
      }
    }
    if (i == (n / 2) + 1) {
      j = 0;
      cube[i][j] = '+';
      j++;
      for (; j < 1 + (n * 2); j++) {
        cube[i][j] = '-';
      }
      cube[i][j] = '+';
      j++;
      for (; (j > 2 + (n / 2) + (n * 2) - i) && (j < 3 + (n / 2) + (n * 2));
           j++) {
        cube[i][j] = ' ';
      }
      cube[i][2 + (n / 2) + (n * 2)] = '|';
    }
    if ((i > (n / 2) + 1) && (i < 1 + n)) {
      j = 0;
      cube[i][j] = '|';
      j++;
      for (; j < 1 + (n * 2); j++) {
        cube[i][j] = ' ';
      }
      cube[i][j] = '|';
      j++;
      for (; (j > 2 + (n / 2) + (n * 2) - i) && (j < 3 + (n / 2) + (n * 2));
           j++) {
        cube[i][j] = ' ';
      }
      cube[i][2 + (n / 2) + (n * 2)] = '|';
    }
    if (i == 1 + n) {
      j = 0;
      cube[i][j] = '|';
      j++;
      for (; j < 1 + (n * 2); j++) {
        cube[i][j] = ' ';
      }
      cube[i][j] = '|';
      j++;
      for (; (j > 2 + (n / 2) + (n * 2) - i) && (j < 3 + (n / 2) + (n * 2));
           j++) {
        cube[i][j] = ' ';
      }
      cube[i][2 + (n / 2) + (n * 2)] = '+';
    }
    if ((i > 1 + n) && (i <= 1 + n + (n / 2))) {
      j = 0;
      cube[i][j] = '|';
      j++;
      for (; j < 1 + (n * 2); j++) {
        cube[i][j] = ' ';
      }
      cube[i][j] = '|';
      j++;
      for (; j < 1 + (n * 2) + temp_fill; j++) {
        cube[i][j] = ' ';
      }
      temp_fill--;
      cube[i][j] = '/';
    }
    if (i == 2 + n + (n / 2)) {
      j = 0;
      cube[i][j] = '+';
      j++;
      for (; j < 1 + (n * 2); j++) {
        cube[i][j] = '-';
      }
      cube[i][j] = '+';
      j++;
    }
  }

  for (i = 0; i <= 2 + n + (n / 2); i++) {
    for (j = 0; j <= 2 + (n / 2) + (n * 2) - temp_pr; j++) {
      mx_printchar(cube[i][j]);
    }
    mx_printchar('\n');
    if (i >= 1 + n) {
      temp_pr++;
    }
  }
}
