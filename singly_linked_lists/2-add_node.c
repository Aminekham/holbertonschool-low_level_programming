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
	new->str = malloc(strlen(str));
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
