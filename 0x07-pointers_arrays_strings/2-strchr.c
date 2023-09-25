#include "main.h"

/**
 * _strchr - the function
 *
 * @s: first value
 *
 * @c: second value
 *
 * Return: return char
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (null);
}
