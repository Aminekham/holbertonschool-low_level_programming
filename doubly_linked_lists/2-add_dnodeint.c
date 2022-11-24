#include "lists.h"
/**
 *add_dnodeint - adding a node at the start of the doubly linked list
 *@head: the head of the doubly linked list
 *@n: the value of the new added node
 *Return: returns the adress of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return(NULL);
    }
    new->n = n;
    new->next = *head;
    (*head)->prev = *new;
    new->prev = NULL;
    *head = new;
    return(*head);
}