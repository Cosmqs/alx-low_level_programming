#include "stdio.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: integer
 */

int get_endianness(void)
{
	int val = 1;
	char *pptr = (char *)&val;

	if (*pptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
