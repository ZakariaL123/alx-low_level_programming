#include "main.h"

/**
 * _memset - the function
 *
 * @s: first value
 *
 * @b: second value
 *
 * @n: third value
 *
 * Return: return char
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
