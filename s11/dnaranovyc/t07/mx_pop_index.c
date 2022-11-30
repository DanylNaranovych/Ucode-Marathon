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

void mx_pop_index(t_list **list, int index) {
  if (index > mx_list_size(*list)) {
    mx_pop_back(list);
  } else if (index < 1) {
    mx_pop_front(list);
  } else {
    t_list *temp = *list;
    int i = 0;
    while (temp) {
      if (i == index - 1) {
        free(temp->next);
        temp->next = temp->next->next;
      }
      temp = temp->next;
      i++;
    }
  }
}
