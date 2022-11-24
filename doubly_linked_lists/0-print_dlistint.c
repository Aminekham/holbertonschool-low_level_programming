#include "lists.h"
/**
 *print_dlistint - printing the whole doubly linked list
 *@h: the head of the doubly linked list
 *Return: the number of elements of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
