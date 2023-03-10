#include "main.h"

/**
 * _islower - Checks for lower case characters
 *
 *@c: parameter to be printed
 *
 * Return: Always 1 (Success)
 * and 0 (Not success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
