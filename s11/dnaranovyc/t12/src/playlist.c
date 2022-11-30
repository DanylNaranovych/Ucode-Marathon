#include "../inc/list.h"

int main(int argc, char *argv[]) {
  if (argc == 1) {
    mx_printerr("usage: ./playlist [file] [command] [args]\n");
    return -1;
  }
  if (mx_strcmp(argv[2], "add") && mx_strcmp(argv[2], "remove") &&
      mx_strcmp(argv[2], "sort") && mx_strcmp(argv[2], "print")) {
    mx_printerr("ERROR\n");
    return -1;
  }
  if (!mx_strcmp(argv[2], "add")) {
    if (argc > 5 || argv[3] == NULL) {
      mx_printerr("ERROR\n");
      return -1;
    }
  }
  if (!mx_strcmp(argv[2], "remove")) {
    if (argc < 3 || argc > 4) {
      mx_printerr("ERROR\n");
      return -1;
    }
  }
  if (!mx_strcmp(argv[2], "sort")) {
    if (argc > 4) {
      mx_printerr("ERROR\n");
      return -1;
    }
  }
  if (!mx_strcmp(argv[2], "print")) {
    if (argc > 3) {
      mx_printerr("ERROR\n");
      return -1;
    }
  }
}
