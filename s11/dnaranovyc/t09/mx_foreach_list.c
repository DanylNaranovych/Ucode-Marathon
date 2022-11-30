#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) {
    t_list *temp = list;
    if (temp || f) {
        while (temp) {
            f(temp);
            temp = temp->next;
        }
    }
}
