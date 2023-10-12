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
	int i = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
		printf("%s%s", (str = va_arg(list, char *)) ? str : "(nil)",
					i ? (separator ? separator : "") : "\n");
	va_end(list);
}
