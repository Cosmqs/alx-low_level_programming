#include "main.h"

/**
 * _puts - prints a string
 * @str: parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
