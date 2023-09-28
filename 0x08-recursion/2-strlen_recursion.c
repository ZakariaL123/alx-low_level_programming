#include "main.h"

/**
 * _strlen_recursion - function to calcule the lenght
 *
 * @s: first value
 *
 * Return: return integer
*/

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != '\0')
	{
		lenght = 1 + _strlen_recursion(s + 1);
	}

	return (lenght);
}
