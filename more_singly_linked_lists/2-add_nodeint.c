#include "lists.h"
/**
 * 
 * 
 * 
 * 
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newint;

    newint = malloc(sizeof(listint_t));
    newint->n = n;
    newint->next = *head;
    *head = newint;
    return(*head);
}
