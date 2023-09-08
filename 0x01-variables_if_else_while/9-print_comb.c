#include <stdio.h>

/**
 * main - empty point
 *
 * Description: alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		if (ch > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + ch);

		ch++;
	}
	putchar('\n');

	return (0);
}
