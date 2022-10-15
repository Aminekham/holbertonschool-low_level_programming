#include "main.h"
#include <string.h>
/**
 * leet - function to encode to leet 
 * 
 * @str: - string to encode
 * 
 * Return: return the string encoded
 *
 */
char *leet(char *str)
{
	int l, i, l2, j;
	char *maj, *min, *leet;

	maj = "AEOTL";
	min = "aeotl";
	leet = "43071";
	l = strlen(str);
	l2 = strlen(maj);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (str[i] == maj[j] || str[i] == min[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
