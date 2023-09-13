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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}

}
