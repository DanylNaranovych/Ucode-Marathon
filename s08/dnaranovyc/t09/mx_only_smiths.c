#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    unsigned int count = 0;
    char temp[] = "Smith";
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, temp) == 0) {
            if (agents[i]->strength < strength) {
                count++;
            }
        }
    }
    count = 0;
    t_agent **new_agents = (t_agent**)malloc(sizeof(t_agent*));
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, temp) == 0) {
            if (agents[i]->strength < strength) {
                new_agents[count] = (t_agent*)malloc(sizeof(t_agent*));
                new_agents[count] = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
                count++;
            }
        }
    }
    mx_exterminate_agents(agents);
    return new_agents;
}

// int main() {
//     t_agent **agents = (t_agent**)malloc(sizeof(t_agent*));
//     for (int i = 0; i < 5; i++) {
//         agents[i] = (t_agent*)malloc(sizeof(t_agent*));
//     }
//     agents[0] = mx_create_agent("Smith", 150, 166);
//     agents[1] = mx_create_agent("Brown", 147, 57);
//     agents[2] = mx_create_agent("Smith", 151, 65);
//     agents[3] = mx_create_agent("Smith", 123, 321);
//     agents[4] = NULL;
//     t_agent **new_agents = (t_agent**)malloc(sizeof(t_agent*));
//     for (int i = 0; i < 1; i++) {
//         new_agents[i] = (t_agent*)malloc(sizeof(t_agent*));
//     }
//     new_agents = mx_only_smiths(agents, 100);
//     printf("%s\n", new_agents[0]->name);
//     printf("%d\n", new_agents[0]->power);
//     printf("%d\n", new_agents[0]->strength);
// }
