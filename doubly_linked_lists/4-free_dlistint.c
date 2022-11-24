#include "lists.h"
/**
 *free_dlistint - free a whole doubly linked list
 *@head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *s;

	s = malloc(sizeof(dlistint_t));
	while (head)
	{
		s->next = head->next;
		free(head);
		head = s->next;
	}
	free(s);
}
