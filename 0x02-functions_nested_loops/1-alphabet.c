#include<stdio.h>
#include"main.h"

/**
 * print_alphabet - print alphabet
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}

	putchar ('\n');
}
