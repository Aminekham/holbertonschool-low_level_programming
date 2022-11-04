#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - printing the name of someone
 *
 * @name: - the name of the person
 *
 * @f: - the function pointer that we will use
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
