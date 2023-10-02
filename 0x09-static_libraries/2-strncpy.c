#include <stdio.h>

/**
 * _strncpy - make two strings one
 *
 * @dest: first string
 *
 * @src: seconf string
 *
 * @n: numberof bytes
 *
 * Return: return the value of string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
		j++;
	}

	return (dest);
}
