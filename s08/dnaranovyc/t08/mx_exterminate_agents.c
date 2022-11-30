#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
    for (int i = 0; agents[i] != NULL; i++) {
        for (int j = 0; agents[i][j] != NULL; j++) {
            free(agents[i][j]);
        }
        free(agents[i]);
    }
    free(agents);
    agents = NULL;
}

