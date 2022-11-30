#include "list.h"

t_list *mx_create_node(void *data) {
    t_list *temp = (t_list*)malloc(P_SIZE * 2);
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// int main() {
//     int a = 12;
//     void *data = &a;
//     t_list *temp = mx_create_node(data);
//     int *b = temp->data;
//     printf("%d", *b);
// }
