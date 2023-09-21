#include <stdio.h>

/**
 * _strcmp - make two strings one
 *
 * @s1: first string
 *
 * @s2: seconf string
 *
 * Return: retur value like _stcmp
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
