#include "main.h"
#include <string.h>
/**
 * rev_string - reverse with pointers
 * 
 * @s: - string to save the reverse thing 
 * 
 */
void rev_string(char *s)
{
	int i, l;
	char *d, *f;
	char ch;

	d = s;
	f = s;
	l = strlen(s);
	for (i = 0; i < l - 1; i++)
	{
		f++;
	}
	for (i = 0; i < l / 2; i++)
	{
		ch = *d;
		*d = *f;
		*f = ch;
		d++;
		f--;
	}
}