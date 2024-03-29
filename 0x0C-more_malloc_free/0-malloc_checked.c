#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: parameter
 *
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
