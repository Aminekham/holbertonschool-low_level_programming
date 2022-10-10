#include "main.h"
#include <string.h>
/**
 * puts2 - lets get this jump
 *@str: the value to jump into
 */
void puts2(char *str)
{
	int l, i;

	l = strlen(str);
	for (i = 0; i < l - 1; i+=2)
	{
		_putchar (str [i]);
	}
	_putchar('\n');
}