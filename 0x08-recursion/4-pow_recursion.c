#include "main.h"

/**
 * _pow_recursion - the main function
 *
 * @x: the first value
 *
 * @y: the seconde value
 *
 * Return: return integer
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
