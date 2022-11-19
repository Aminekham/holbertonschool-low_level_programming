#include "lists.h"
/**
 *add_nodeint - adding a node at the begining of the list
 *@head: the head of the list
 *@n: the integer used as value
 *Return: the adress of the new added node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newint;

    newint = malloc(sizeof(listint_t));
    if (newint == NULL)
    {
        return(NULL);
    }
    newint->n = n;
    newint->next = *head;
    *head = newint;
    return(*head);
}
