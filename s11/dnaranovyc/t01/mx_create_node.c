#include "list.h"

t_list *mx_create_node(void *data) {
    t_list *temp = (t_list*)malloc(P_SIZE * 2);
    temp->data = data;
    temp->next = NULL;
    return temp;
}
