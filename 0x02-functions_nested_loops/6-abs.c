#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @a: value to be measured
 *
 * Return: Always 0 (Success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (a);
}
