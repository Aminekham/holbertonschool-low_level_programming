#include "lists.h"
/**
 *add_node_end - adding a node at the end
 *@head: a pointer on the first node
 *@str: the string to duplicate
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, **yas;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	yas = head;
	while (*yas)
	{
		yas = &(*yas)->next;
	}
	*yas = new;
	return (new);
}
