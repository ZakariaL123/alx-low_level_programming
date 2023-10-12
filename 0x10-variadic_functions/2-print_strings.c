#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a variable number of strings with a separator
 * @separator: string to be printed between strings
 * @n: number of strings to be printed
 * @...: variable number of string arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	putchar('\n');
}
