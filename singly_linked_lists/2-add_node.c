#include "lists.h"
/**
 *add_node - function to change the first node of a linked list
 * @head: the head of the linked list
 * @str: the string to add as the node value
 * Return: the adress of the new node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return(NULL);
	}
	new->str = malloc(strlen(str));
	if (new->str == NULL)
	{
		return(NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
