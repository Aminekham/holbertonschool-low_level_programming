#include "lists.h"
/**
 *print_list - printing the elements of the list
 *
 *@h: - the list itself
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
			h = h->next;
			c++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			c++;
		}
	}
	return (c);
}
