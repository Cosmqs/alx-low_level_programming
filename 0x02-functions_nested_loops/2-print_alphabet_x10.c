#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i = 0;
	char j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
