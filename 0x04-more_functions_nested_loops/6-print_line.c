#include "main.h"

/**
 * print_line - function to lower case checker
 * @n: is the number of times the character _ should be printed
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}	
}
