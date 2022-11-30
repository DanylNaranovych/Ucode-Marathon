#include "only_smiths.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

t_agent *mx_create_agent(char *name, int power, int strength) {
    if(name == NULL) return NULL;
    t_agent *agent = NULL;
    agent = (t_agent *)malloc(sizeof(t_agent));
    agent->power = power;
    agent->strength = strength;
    agent->name = mx_strdup(name);
    return agent;
}
