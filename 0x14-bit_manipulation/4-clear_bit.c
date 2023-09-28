#include "main.h"

/**
* clear_bit - Set the value of a bit to 0 at a given index.
* @n: number
* @index: index of the bit to be set
* Return: 1 if worked, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
