#include "main.h"
/**
 *
 *
 *
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
	sum = malloc(l + n + 1);
	if (sum == NULL)
	{
		return(NULL);
	}
	for (i = 0; i < l; i++)
	{
		sum[i] = s1[i];
	}
	for (i = i ;i < l + n + 1; i++)
	{
		sum[i] = s2[j];
		j++;
	}
	return (sum);
}