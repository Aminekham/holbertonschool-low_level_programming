#include "lists.h"
/**
 *add_nodeint_end - adds a node at the end of a linked list
 *@head: the head to access the linked list
 *@n: the value of the integer
 *Return: returns the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend, **new;

	newend = malloc(sizeof(listint_t));
	if (newend == NULL)
	{
		return (NULL);
	}
	newend->n = n;
	newend->next = NULL;
	new = head;
	while (*new)
	{
		new = &(*new)->next;
	}
	*new = newend;
	return (newend);
}
