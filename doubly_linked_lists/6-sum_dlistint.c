#include "lists.h"
/**
 *sum_dlistint - returns the sum of the data in the doubly linked list
 *@head: the head of the doubly linked list
 *Return: returns the value of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *save;
	int s = 0;

	if (head == NULL)
	{
		return (s);
	}
	save = head;
	while (save->next)
	{
		s = s + save->n;
		save = save->next;
	}
	s = s + save->n;
	return (s);
}
