void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int count = 0;
    while (str[count] != '\0') {
        if (str[count] == delim) {
            while (str[count] == delim) {
                count++;
            }
            mx_printchar('\n');
        } else {
            mx_printchar(str[count]);
            count++;
        }
    }
    mx_printchar('\n');
}
