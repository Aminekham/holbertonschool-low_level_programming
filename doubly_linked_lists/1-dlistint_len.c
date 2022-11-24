#include "lists.h"
/**
 *print_dlistint - counting the number of elements of a doubly linked list
 *@h: the head of the doubly linked list
 *Return: the number of elements of the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
