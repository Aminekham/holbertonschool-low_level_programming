#include "lists.h"
/**
 *free_list - freeing all the linked list
 *@head: - the head of the linked list
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
