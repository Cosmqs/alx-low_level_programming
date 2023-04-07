#include "main.h"


/**
 * flip_bits -  number of bits you would
 * need to flip to get from one number to another.
 * @n: 1st param
 * @m: second param
 *
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int len = 0;

	while (result != 0)
	{
		len++;
		result &= (result - 1);
	}
	return (len);
}
