#include<stdio>
#include "main.h"

/**
 * _islower - function to lower case checker
 *
 * @c: checks input of function
 *
 * Return: return 1 if c lower case else return 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
