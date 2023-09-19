#include "main.h"

/**
 * puts_half - function to lower case checker
 *
 * @str: checks input of function
*/

void puts_half(char *str)
{
	int length = 0;
	int start = (length -1) / 2;


	while (str[length] != '\0')
	{
		length++;
	}


	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}
