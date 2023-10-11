#include "function_pointers.h"

/**
 * array_iterator - a function to call another function
 * @array: array
 * @size: the size of array
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
