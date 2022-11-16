#include "lists.h"
/**
 *list_len - function to return the length of a linked list
 *
 * @h: the linked list to count its elements
 *
 * Return: returns the length
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
