#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: parameter one
 * @b: parameter two
 * @n: parameter three
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

