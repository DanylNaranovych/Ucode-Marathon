#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct s_agent
{
    char *name;
    int power;
    int strength;
} t_agent;

void mx_exterminate_agents(t_agent **agents);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
t_agent *mx_create_agent(char *name, int power, int strength);
int mx_strcmp(const char *s1, const char *s2);
