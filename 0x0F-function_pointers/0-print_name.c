#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that print names
 *
 * @name: the name of user
 *
 * @f: function to pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
