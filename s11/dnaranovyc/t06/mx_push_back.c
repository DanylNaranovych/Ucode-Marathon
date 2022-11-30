#include "list.h"

void mx_push_back(t_list **list, void *data) {
    t_list *temp = mx_create_node(data);
    t_list *some = *list;
    if (*list == NULL) {
        *list = temp;
    } else {
        while (some->next) {
            some = some->next;
        }
        some->next = temp;
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
// }
