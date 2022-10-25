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
	sum = malloc((l + n + 1) * sizeof(char));
	if (sum == NULL)
	{
		return(NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < l; i++)
	{
		sum[i] = s1[i];
	}
	for (i = i;i <= (l + n); i++)
	{
		sum[i] = s2[j];
		j++;
	}
	return (sum);
	free(sum);
}