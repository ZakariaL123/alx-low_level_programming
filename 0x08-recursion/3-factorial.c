#include "main.h"

/**
 * factorial - function that returns the factorial
 *
 * @n: first value
 *
 * Return: return the integer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
