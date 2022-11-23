#include "main.h"
/**
 *read_textfile - reading the content of a file
 *@filename: the file that we want to read content
 *@letters: the number of letters that we want to read
 *Return: the number of printed elements
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	size_t i;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	b = malloc(letters);
	if (b == NULL)
	{
		return (0);
	}
	i = read(f, b, letters);
	b[i] = '\0';
	write(STDOUT_FILENO, b, i);
	close(f);
	return (i);
}
