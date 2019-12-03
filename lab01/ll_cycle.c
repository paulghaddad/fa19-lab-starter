#include <stddef.h>
#include "ll_cycle.h"
#include <stdio.h>

int ll_has_cycle(node *head) {
    if (head == NULL)
      return 0;

    struct node *hare = head;
    struct node *tortoise = head;

    while ((hare = hare->next) != 0) {
      if ((hare = hare->next) == 0) {
        return 0;
      }

      tortoise = tortoise->next;

      if (hare == tortoise) {
        return 1;
      }
    }

    return 0;
}
