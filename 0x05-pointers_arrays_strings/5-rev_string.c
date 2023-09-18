#include "main.h"

/**
 * rev_string - function to lower case checker
 *
 * @s: checks input of function
*/

void rev_string(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++:
	}
	end--;

	while (s < end)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
