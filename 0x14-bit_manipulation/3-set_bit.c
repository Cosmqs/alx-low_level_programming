#include "main.h"

/**
 * set_bit - sets the velue of a bit at given index to 1
 * @n: pointer to the number
 * @index: index
 *
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
