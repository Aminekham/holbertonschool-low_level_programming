#include "lists.h"
/**
 * 
 * 
 * 
 * 
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *save;

    save = head;
    for (i = 0; i <= index; i++)
    {
        save = save->next;
    }
    return(save);
}