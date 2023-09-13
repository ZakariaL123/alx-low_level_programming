#include "main.h"

/**
 * _isalpha - function to lower case checker
 *
 * @c: checks input of function
 *
 * Return: return 1 if c lower case else return 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
