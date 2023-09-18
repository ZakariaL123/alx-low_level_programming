#include "main.h"

/**
 * print_rev - function to lower case checker
 *
 * @s: checks input of function
*/

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (end != s)
	{
		end--;
		putchar(*end);
	}

	putchar('\n');
}
