#include "main.h"
/**
 * print_array - this function is made to print an array
 *
 * @a: - variable for the array itself
 * 
 * @n: - the length of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf(" %d", *a);
		}
		else if (i == 0)
		{
			printf("%d,", *a);
			a++;
		}
		else
		{
	    	printf(" %d,", *a);
			a++;
		}
	}
	printf("\n");
}
