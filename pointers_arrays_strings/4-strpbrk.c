#include "main.h"
#include <string.h>
/**
 * 
 * 
 */
char *_strpbrk(char *s, char *accept)
{
	int j, l1; 

	l1 = strlen(accept);
	while (*s != '\0' )
	{
		for (j = 0; j < l1; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
	 	s++;
	}
	return (NULL);
}
