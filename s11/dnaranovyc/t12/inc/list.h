#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#define P_SIZE 8

typedef struct s_list {
    void *data;
    struct s_list *next;
}   t_list;

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b));
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char*s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strtrim(const char *str);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_pow(int n, unsigned int pow);
