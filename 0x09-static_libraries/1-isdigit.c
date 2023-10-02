#include "main.h"

/**
 * _isdigit - function to lower case checker
 *
 * @c: the input thta we want to test
 *
 * Return: return 1 if c is digit case else return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
