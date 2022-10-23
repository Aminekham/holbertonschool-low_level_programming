#include "main.h"
/**
 *str_concat - concatinates two strings in a new allocated memory
 *
 * @s1: - the first string
 *
 * @s2: - the second string
 *
 * Return: returns the final result
 *
 */
char *str_concat(char *s1, char *s2)
{
	int l, l1, i, j;
	char *all;

	l = strlen(s1);
	l1 = strlen(s2);
	all = malloc((sizeof(char) * (l + l1)) + 1);
	if (s1 == NULL && s2 == NULL)
	{
		all = "";
	}
	else if (all == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			*(all + i) = *(s1 + i);
		}
		for (j = 0; j < l1; j++)
		{
			*(all + i + j) = *(s2 + j);
		}
	}
	return (all);
}
