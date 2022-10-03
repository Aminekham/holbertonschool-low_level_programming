#include <stdio.h>
/**
 * main - Entry point for c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 122; c < 96; --c)
{
		putchar(c);
}
	putchar('\n');
	return (0);
}
