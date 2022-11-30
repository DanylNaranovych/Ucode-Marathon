#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
    char str1[] = "Follow the white rabbit.";
    char str2[] = "Knock, knock, Neo.";
    write(1, str1, strlen(str1));
    write(1, "\n", 1);
    write(1, str2, strlen(str2));
    write(1, "\n", 1);
}
