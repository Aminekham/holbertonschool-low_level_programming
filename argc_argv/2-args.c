#include <stdio.h>
/**
 *main - function to print the arguments
 *
 * @argc: - counter of arguments
 *
 * @argv: - vector of strings
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
