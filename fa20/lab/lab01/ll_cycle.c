#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *tortoise = head ,*hare = head;
    do
    {
        if(hare != NULL)
            hare = hare->next;
        else
            return 0;

        if(hare != NULL)
            hare = hare->next;
        else
            return 0;

        tortoise = tortoise->next;
    }
    while(tortoise != hare);

    return 1;
}