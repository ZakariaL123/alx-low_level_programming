#include "main.h"

/**
 * print_diagonal - function to lower case checker
 * @n: is the number of times the character _ should be printed
*/

void print_diagonal(int n)
{
	int i , j;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (int i = 0 ; i < n ; i++)
		{
			for (int j = 0 ; j < i ; i++)
			{
				_putchar(92);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
