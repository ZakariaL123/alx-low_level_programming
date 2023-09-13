#include "main.h"

/**
 * jack_bauer - function to lower case checker*
 *
 * Return: return 1 if c lower case else return 0
*/

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			putchar('0' + (hours / 10));
			putchar('0' + (hours % 10));
			putchar(':');
			putchar('0' + (minutes / 10));
			putchar('0' + (minutes % 10));
			putchar('\n');

			minutes++;
		}

		hours++;
		minutes = 0;
	}
}
