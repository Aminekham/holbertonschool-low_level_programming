#include "lists.h"
/**
 *free_listint - function to free a whole linked list
 *@head: the head of the linked list
 *
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
