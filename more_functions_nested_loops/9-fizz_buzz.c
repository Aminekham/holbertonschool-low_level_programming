#include <stdio.h>
/**
 * fizzbuzz - inting all numbers till 14
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 )
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("fizzbuzz ");
		}
		else 
		{
			printf("%d ",i);
		}
	}
	return (0);
}