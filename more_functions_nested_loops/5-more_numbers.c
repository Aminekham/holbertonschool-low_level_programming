 #include "main.h"
/**
 * more_numbers - printing all numbers till 14
 *
 */
void more_numbers(void)
{
	int i, j;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
				_putchar(i/10 + '0');
				_putchar(i%10 + '0');
				
		}
		_putchar('\n');
	}
}
