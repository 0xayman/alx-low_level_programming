#include "main.h"

/**
* flip_bits - Returns the number of bits you would need to flip to get from
* one number to another.
* @n: number
* @m: number
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned int count = 0;

	n = n ^ m;
	while (n)
	{
		if (n & mask)
			count++;
		n = n >> 1;
	}
	return (count);
}
