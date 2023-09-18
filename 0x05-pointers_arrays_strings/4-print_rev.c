#include "main.h"

/**
 * print_sign - function to lower case checker
 *
 * @n: checks input of function
 *
 * Return: return 1 if c lower case else return 0
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
