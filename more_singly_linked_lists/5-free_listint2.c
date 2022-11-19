#include "lists.h"
/**
 *free_listint2 - free with double pointer
 *@head: the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *hd = NULL;

	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		hd = (*head)->next;
		free(*head);
		*head = hd;
	}
	*head = NULL;
}
