#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *temp = mx_create_node(data);
    if (*list == NULL) {
        *list = temp;
    } else {
        temp->next = *list;
        *list = temp;
    }
}

// int main() {
//     int i = 1;
//     void *data1 = &i;
//     t_list *list = NULL;
//     int a = 12;
//     void *data2 = &a;
//     mx_push_front(&list, data2);
//     int *b = list->data;
//     printf("%d\n", *b);
//     int *e = list->next->data;
//     printf("%d\n", *e);
// }
