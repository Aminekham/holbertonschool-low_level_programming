#include "lists.h"
/**
 *listint_len - calculates the number of elements in a singly linked list
 *@h: - a pointer on the head of the singly linked list
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;
	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
