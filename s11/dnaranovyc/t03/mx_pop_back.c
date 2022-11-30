#include "list.h"

void mx_pop_back(t_list **list) {
    t_list *some = *list;
    if (some->next == NULL) {
        free(*list);
        *list = NULL;
    } else {
        while (some->next->next) {
            some = some->next;
        }
        free(some->next);
        some->next = NULL;
    }
}

// int main() {
//     int i = 1;
//     void *data1 = &i;
//     t_list *list = mx_create_node(data1);
//     int a = 12;
//     void *data2 = &a;
//     mx_push_back(&list, data2);
//     int *b = list->data;
//     printf("%d\n", *b);
//     int *e = list->next->data;
//     printf("%d\n", *e);
//     mx_pop_back(&list);
//     b = list->data;
//     printf("%d\n", *b);
//     e = list->next->data;
//     printf("%d\n", *e);
// }
