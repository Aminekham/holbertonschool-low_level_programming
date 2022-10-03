#include <stdio.h>
/**
 * main - Entry point for c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; ++i)
{
		putchar(i);
}
	for (i = 65; i < 90; ++i)
{
		putchar(i);
}
	putchar('\n');
	return (0);
}
