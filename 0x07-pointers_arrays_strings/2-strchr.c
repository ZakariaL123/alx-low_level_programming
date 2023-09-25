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
	int i = 0;

	while (*s[i] != '\0')
	{
		if (*s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
