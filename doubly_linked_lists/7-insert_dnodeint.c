#include "lists.h"
/**
 *insert_dnodeint_at_index - a function that inserts a new node
 *@h: the head of the linked list
 *@idx: the index we want to insert in
 *@n: the value of the new node
 *Return: the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **save, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	new->n = n;
	save = h;
	while (i < idx - 1 && (*save)->next)
	{
		save = &(*save)->next;
		i++;
	}
	new->next = (*save)->next;
	new->prev = *save;
	(*save)->next = new;
	save = &(*save)->next;
	(*save)->prev = new;
	return (new);
}
