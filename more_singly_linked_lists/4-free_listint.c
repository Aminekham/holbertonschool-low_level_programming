#include "lists.h"
/**
 *free_listint - function to free a whole linked list
 *@head: the head of the linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *hd = NULL;

	while (head)
	{
		hd = head->next;
		free(head);
		head = hd;
	}
}
