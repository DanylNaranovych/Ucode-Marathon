#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *temp;
    while (*list) {
        temp = NULL;
        if (list) {
            temp = (*list)->next;
            free(*list);
            *list = temp;
        }
    }
}
