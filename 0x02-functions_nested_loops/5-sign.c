#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to be measured
 *
 * Return: 1 and prints + if n is grater than zero
 * and returns 0 if n is zero
 * and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
