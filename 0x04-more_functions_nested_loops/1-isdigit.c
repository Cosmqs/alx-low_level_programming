#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *@c: parameter to be measured
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
