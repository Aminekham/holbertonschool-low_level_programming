#include <stdio.h>
/**
 * main - Entry point for c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; ++i)
{
		putchar(i);
}
	for (i = 65; i < 71; ++i)
{
		putchar(i);
}
	putchar('\n');
	return (0);
}