#include "main.h"

/**
 * print_square - function to lower case checker
 * @size: number of '#'
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int line = 1 ; line <= size ; line++)
		{
			for (int num = 1 ; num < zise ; num++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
