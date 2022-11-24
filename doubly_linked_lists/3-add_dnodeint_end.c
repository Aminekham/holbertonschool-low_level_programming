#include "lists.h"
/**
 *add_dnodeint_end - adding a node at the end of the doubly linked list
 *@head: the head of the doubly linked list
 *@n: the value of the new added node
 *Return: returns the adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, **save;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	if (!(*head))
	{
		end->prev = NULL;
		(*head) = end;
		return (end);
	}
	save = head;
	while ((*save)->next)
	{
		save = &(*save)->next;
	}
	end->prev = (*save);
	if (*save)
	{
		(*save)->next = end;
	}
	return (end);
}
