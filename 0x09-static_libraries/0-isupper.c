#include "main.h"

/**
 * _isupper - function to uppercase checker
 * @c: value of c
 * Return: return 1 if c uppercase else return 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
