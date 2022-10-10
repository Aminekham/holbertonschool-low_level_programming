#include "main.h"
/**
 * 
 * 
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", *a);
		}
	    printf("%d ,", *a);
		a++;
	}
}