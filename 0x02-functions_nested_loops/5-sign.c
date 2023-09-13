#include "main.h"

/**
 * print_sign - function to lower case checker
 *
 * @n: checks input of function
 *
 * Return: return 1 if c lower case else return 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		puthar('-');
		return (-1);
	}

}
