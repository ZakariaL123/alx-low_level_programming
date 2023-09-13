#include "main.h"

/**
 * print_last_digit - function to lower case checker
 *
 * @n: checks input of function
 *
 * Return: return 1 if c lower case else return 0
*/

int print_last_digit(int n)
{
	int las_digit;

	if (n < 0)
		las_digit = -1 * (n % 10);
	else
		las_digit = n % 10;

	_putchar(las_digit + '0');
	return (las_digit);
}
