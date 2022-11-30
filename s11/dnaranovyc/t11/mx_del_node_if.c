#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
  t_list *some = *list;
  if ((*list)->next) {
    t_list *temp = (*list)->next;
    while (temp->next) {
      if (cmp(temp->data, del_data)) {
        some->next = temp->next;
        free(temp);
        temp = some->next;
      } else {
        some = some->next;
        temp = temp->next;
      }
    }
    if (cmp(temp->data, del_data)) {
      some->next = NULL;
      free(temp);
    }
    temp = *list;
    if (cmp(temp->data, del_data)) {
      (*list) = (*list)->next;
      free(temp);
    }
  } else {
    if (cmp(some->data, del_data)) {
      free(*list);
    }
  }
}
