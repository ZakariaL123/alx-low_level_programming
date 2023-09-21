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
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
