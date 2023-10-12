#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of a variable number of integers
 * @n: number of arguments
 * @...: variable number of arguments
 * Return: sum of the integers
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int i;

	va_start(num, n);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
