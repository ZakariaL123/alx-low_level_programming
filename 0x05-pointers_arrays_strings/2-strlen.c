#include "main.h"

/**
 * _strlen - function to calcule string
 *
 * @s: char to calcule
 *
 * Return: return lenght
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
