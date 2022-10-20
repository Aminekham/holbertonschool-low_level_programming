#include <stdio.h>
#include <stdlib.h>
/**
 *main - a function that returns the sum of arguments
 *
 * @argc: - the counter of arguments
 *
 * @argv: - the vector of arguments
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, r, j;

	r = 0;
	for (i = 0; i < argc; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (argv[i][j] < 48 && argv[i][j] > 58)
			{
				printf("Error\n");
				return (1);
			}
		}
		r = r + atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
