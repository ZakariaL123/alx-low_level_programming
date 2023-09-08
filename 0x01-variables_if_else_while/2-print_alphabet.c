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
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		putchar('\n');
	}
	return (0);
}
