#include "main.h"

/**
 * _strcat - make two strings one
 *
 * @dest: first string
 *
 * @src: seconf string
 *
 * Return: return the value of string*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return(dest);
}
