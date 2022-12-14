#include "main.h"
/**
 *string_nconcat - fucntion that concatinates two strings with a certein factor
 *
 * @s1: - the first string
 *
 * @s2: - the second one (works with the factor)
 *
 * @n: - the factor
 *
 *Return: - the sum of the two with the n factor
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int l, l1, i, j;

	l = strlen(s1);
	l1 = strlen(s2);
	j = 0;
	if (n > l1)
	{
		n = l1;
	}
	sum = malloc((l + n + 1) * sizeof(char));
	if (sum == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; i < l; i++)
	{
		sum[i] = s1[i];
	}
	for (i = i; i < (l + n); i++)
	{
		sum[i] = s2[j];
		j++;
	}
	sum[i] = '\0';
	return (sum);
	free(sum);
}
