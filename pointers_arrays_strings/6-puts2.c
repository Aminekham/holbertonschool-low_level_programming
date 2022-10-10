#include "main.h"
#include <string.h>
/**
 * puts2 - lets get this jump
 *@str: the value to jump into
 */
void puts2(char *str)
{
	int l, i;
	char *j, ch;

	l = strlen(str);
	j = str;
	for (i = 1; i <= l/2; i++)
	{
		ch = *j;
		printf("%c", ch);
		j += 2;
	}
	printf("\n");
}