#include "main.h"
#include <string.h>
/**
 * 
 * 
 */
void rev_string(char *s)
{
	int l, i, r;
	char *d = s;

	l = strlen(s);
	for (i = l - 1; i >= 0; i++)
	{
		r = l - 1 - i;
		s [r] = d[i];
	}
}