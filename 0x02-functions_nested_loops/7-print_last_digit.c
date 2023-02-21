#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @i: Parameter to be measured
 *
 * Return: Always y (Success)
 */

int print_last_digit(int i)
{
	int y;

	y = i % 10;

	if (i < 0)
		y = -y;
	_putchar(y + '0');
	return (y);


	if (i >= 0)
		y = y;
	_putchar(y + '0');
	return (y);
}
