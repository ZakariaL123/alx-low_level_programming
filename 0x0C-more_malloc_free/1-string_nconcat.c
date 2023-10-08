#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: Number of bytes
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_lenght, s2_lenght;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_lenght] != '\0'; s1_lenght++)
		;

	for (s2_lenght = 0; s2[s2_lenght] != '\0'; s2_lenght++)
		;

	str = malloc(s1_lenght + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
