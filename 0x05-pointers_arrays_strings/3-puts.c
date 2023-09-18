#include "main.h"

/**
 * _puts - function to lower case checker
 *
 * @str: checks input of function
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
