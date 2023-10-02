#include <stdio.h>

/**
 * _strncat - make two strings one
 *
 * @dest: first string
 *
 * @src: seconf string
 *
 * @n: numberof bytes
 *
 * Return: return the value of string
*/


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
