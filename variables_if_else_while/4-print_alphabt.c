#include <stdio.h>
/**
 * main - Entry point for c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	i= 'a';
	while (i <= 'z')
	if (i != 'q' && i != 'e')
{
	putchar(i);
	++i;
}
	else
{
++i;
}
	putchar('\n')
	return (0);
}
