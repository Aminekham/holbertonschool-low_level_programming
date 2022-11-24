#include "lists.h"
/**
 *get_dnodeint_at_index - returns the desired node
 *@head: the head of the doubly linked list
 *@index: the desired index
 *Return: the node with the index : index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *save;

	if (head == NULL)
	{
		return (NULL);
	}
	save = head;
	while (save->next)
	{
		save = save->next;
		i++;
	}
	if (index > i)
	{
		return (NULL);
	}
	save = head;
	for (i = 1; i <= index; i++)
	{
		save = save->next;
	}
	return (save);
}
