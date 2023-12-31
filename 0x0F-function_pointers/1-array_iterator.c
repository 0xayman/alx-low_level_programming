#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - program
 * @array: char
 * @size: int
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
