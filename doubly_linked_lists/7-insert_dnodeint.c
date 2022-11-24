#include "lists.h"
/**
 * 
 * 
 * 
 * 
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t **save, *new;
    unsigned int i = 0;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return(NULL);
    }
    new->n = n;
    save = h;
    while (i < idx - 1)
    {
        save = &(*save)->next;
        i++;
    }
    new->next = (*save)->next;
    new->prev = *save;
    (*save)->next = new;
    save = &(*save)->next;
    (*save)->prev = new;
    return(new);
}