#include "lists.h"
/**
 *pop_listint - deleting the first node
 *@head: the head of the linked list
 *Return: the data stored in the node
 */
int pop_listint(listint_t **head)
{
	listint_t **hd = NULL;
	int v;

	*hd = (*head)->next;
	v = (*head)->n;
	free(*head);
	*head = *hd;
	return (v);
}
