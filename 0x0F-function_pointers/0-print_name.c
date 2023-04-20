#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - display a name
 * @name: name to print
 * @f: pointer to function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}