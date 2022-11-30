void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

void mx_print_name(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
}

int main(int argc, char *argv[]) {
    mx_print_name(argc, argv);
}
