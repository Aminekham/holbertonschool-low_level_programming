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
	if (i != 57)
{
		putchar(',');
		putchar(32);
}
}

	putchar('\n');
	return (0);
}
