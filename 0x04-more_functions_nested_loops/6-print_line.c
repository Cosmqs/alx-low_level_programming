#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line in the terminal
 * @n: parameter to be used
 *
 * Return: 0.
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
