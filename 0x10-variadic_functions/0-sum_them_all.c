#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function for some
 * @n: conter
 * Return: return int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum, i;

	va_start(num , n);
	sum = 0;
	for (i = 0 ; i < 0 ; i++)
	{
		sum += va_arg(num , int);
	}
	va_end(num);

	return(sum);
}
