#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function program
 * @array: char
 * @size: int
 * @cmp: pointer
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && size && cmp)
	{
		for (a = 0; a < size && size > 0; a++)
		{
			if (((*cmp)(array[a])) != 0)
				return (a);
		}
	}
	return (-1);
}
