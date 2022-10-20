#include <stdio.h>
/**
 *main - count the arguments
 *
 * @argc: - counting the number of elements in argv
 *
 * @argv: - the vector of commands
 *
 * Return: returns a 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		argv++;
	}
	printf("%d\n", i - 1);
	return (0);
}
