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
	
	if (n > l1)
	{
		n = l1;
	}
	sum = malloc(l + n + 1);
	if (sum == NULL)
	{
		return(NULL);
	}
	if (s1 == NULL)
	{
		sum = s2;
	}
	else if (s2 == NULL)
	{
		sum = s1;
	}
	else
	{
		j = 0;
		for (i = 0; i < l; i++)
		{
			sum[i] = s1[i];
		}
		for (i = i;i < (l + n); i++)
		{
			sum[i] = s2[j];
			j++;
		}
	}	
	return (sum);
}