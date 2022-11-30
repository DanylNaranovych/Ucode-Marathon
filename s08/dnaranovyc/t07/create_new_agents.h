#pragma once
typedef struct s_agent
{
    char *name;
    int power;
    int strength;
} t_agent;
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
t_agent *mx_create_agent(char *name, int power, int strength);
