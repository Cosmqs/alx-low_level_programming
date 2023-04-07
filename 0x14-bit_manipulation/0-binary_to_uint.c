#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: tring to be converted
 *
 * Return: 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int val = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		val = 2 * val + (b[j] - '0');
	}

	return (val);
}
