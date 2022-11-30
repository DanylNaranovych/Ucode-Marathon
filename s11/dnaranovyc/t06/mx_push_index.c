#include "list.h"

int mx_list_size(t_list *list) {
    int count = 0;
    if (list == NULL) {
        return 0;
    }
    while (list) {
        list = list->next;
        count++;
    }
    return count;
}

void mx_push_index(t_list **list, void *data, int index) {
    if (index > mx_list_size(*list)) {
        mx_push_back(list, data);
    } else if (index < 1) {
        mx_push_front(list, data);
    } else {
        t_list *temp = *list;
        t_list *new = mx_create_node(data);
        int i = 0;
        while (temp) {
            if (i == index - 1) {
                new->next = temp->next;
                temp->next = new;
            }
            temp = temp->next;
            i++;
        }
    }
}
