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
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}
	putchar('\n');

	return (0);
}
