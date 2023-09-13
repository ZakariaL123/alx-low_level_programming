#include<stdio.h>
#include"main.h"

/**
 * main - test
 *
 * Description: alphabe
 *
 * Return: return 0
 *
*/

int main(void)
{
	print_alphabet();

	return (0);
}

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
