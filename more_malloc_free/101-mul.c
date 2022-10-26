#include "main.h"
/**
 *main - the main function to find the name
 *
 * @argc: - the argc to count
 *
 * @argv:- the argv is the arguments vector
 *
 * Return: the zero for int main
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		argc = 1;
		r = atoi(argv[argc]) * atoi(argv[argc + 1]);
		printf("%d\n", r);
	}
	return (0);
}
