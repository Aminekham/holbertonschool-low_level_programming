#include "lists.h"
/**
 *print_listint - printing the whole linked list
 *@h: the header of the list
 *Return: returns the number of elements in the singly linked list
 *
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
