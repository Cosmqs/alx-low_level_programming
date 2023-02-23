#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code
 * @size: parameter to be measured
 *
 * Return: Empty.
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
