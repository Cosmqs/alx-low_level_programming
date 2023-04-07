#include "main.h"


/**
 * print_binary - prints a binary representation of a number
 * @n: The number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int x, len = 0;
	unsigned long int i;

	for (x = 63; x >= 0; x--)
	{
		i = n >> x;
		if (i & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
		{
			_putchar('0');
		}
	}
	if (!len)
	{
		_putchar('0');
	}
}
