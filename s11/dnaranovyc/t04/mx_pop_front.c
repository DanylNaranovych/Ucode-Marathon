#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *some = NULL;
    if (*list != NULL) {
        some = (*list)->next;
        free(*list);
        *list = some;
    }
}