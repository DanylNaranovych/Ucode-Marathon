#include <stdbool.h>

bool mx_isspace(char c) {
    return (c == '\t'
            || c == '\n'
            || c == '\v' 
            || c == '\f' 
            || c == '\r' 
            || c == ' '
            || c == '\0'
            ? 1 : 0);
}
