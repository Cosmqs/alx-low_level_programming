#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints from 0 - 9
 *@a: parameter to be measured
 * 
 * Return: 0.
 */

void print_numbers(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}	
