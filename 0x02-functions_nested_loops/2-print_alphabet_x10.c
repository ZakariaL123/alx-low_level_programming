#include "main.h"

/**
 * print_alphabet_x10 - print alpha x10
*/

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			putchar (alpha);
			alpha++;
		}
		alpha = 'a';

		putchar ('\n');
		i++;
	}
}
