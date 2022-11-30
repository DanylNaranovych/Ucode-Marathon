#pragma once
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
int mx_count_words(const char *str, char delimiter);
char *mx_file_to_str(const char *filename);
char *mx_strnew(const int size);
void mx_print(char *file);
void mx_print3(char *file, int *words, int *line, int *size);

