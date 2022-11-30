void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    unsigned int temp = 1;
    for (unsigned int i = 0; i < length; i++) {
        for (unsigned int j = 0; j < temp; j++) {
            mx_printchar(c);
        }
        mx_printchar('\n');
        temp++;
    }
}
