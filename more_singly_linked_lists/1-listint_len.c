#include "lists.h"
/**
 * 
 * 
 * 
 * 
*/
size_t listint_len(const listint_t *h)
{
    int c = 0;
    while (h)
    {
        h = h->next;
        c++;
    }
    return(c);
}