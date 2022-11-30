#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>

int mx_atoi(const char *str);
bool mx_check_err(char *o1, char *o2, char *op, char *res);
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
void mx_mul(char *o1, char *o2, char *op, char *res, bool o1_b, bool o2_b, bool res_b);
void mx_div(char *o1, char *o2, char *op, char *res, bool o1_b, bool o2_b, bool res_b);
void mx_add(char *o1, char *o2, char *op, char *res, bool o1_b, bool o2_b, bool res_b);
void mx_sub(char *o1, char *o2, char *op, char *res, bool o1_b, bool o2_b, bool res_b);
void mx_check(char *o1, char *o2, char *res, bool *o1_b, bool *o2_b, bool *res_b);
int mx_pow(int n, unsigned int pow);
void mx_print(int o1, int o2, char *op, int res);
