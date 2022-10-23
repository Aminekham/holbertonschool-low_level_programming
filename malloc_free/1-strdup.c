#include "main.h"
/**
 *_strdup - function to copy the contents of the input string to a memory
 *
 * @str: - the string to copy
 *
 *Return : returns a pointer to the copied string
 */
char *_strdup(char *str)
{
	int i, l;
	char *newstr;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		l = strlen(str);
		newstr = malloc((sizeof(char) * l) + 1);
		while (i < l)
		{
			*(newstr + i) = *(str + i);
			i++;
		}
	}
	return (newstr);
	free(newstr);
}
