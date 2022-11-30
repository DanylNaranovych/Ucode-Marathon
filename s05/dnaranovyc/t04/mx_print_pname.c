void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

void mx_print_pname(char *argv[]) {
  if (argv[0][0] == '.') {
    mx_printstr(mx_strchr(argv[0], argv[0][2]));
  } else {
    char *str = mx_strchr(mx_strchr(argv[0], '4'), '/');
    mx_printstr(mx_strchr(str, str[1]));
  }
  mx_printchar('\n');
}

int main(int argc, char *argv[]) {
  argc = 1;
  argc++;
  mx_print_pname(argv);
}
