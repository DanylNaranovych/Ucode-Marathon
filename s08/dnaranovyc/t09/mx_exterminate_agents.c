#include "only_smiths.h"

void mx_exterminate_agents(t_agent **agents) {
    for (int i = 0; agents[i] != NULL; i++) {
        free(agents[i]);
    }
    agents = NULL;
}

