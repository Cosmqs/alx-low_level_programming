#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: number with the bits
 * @index: index
 *
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	temp = ~(1UL << index);

	*n &= temp;
	return (1);
}
