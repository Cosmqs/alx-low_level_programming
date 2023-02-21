#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
