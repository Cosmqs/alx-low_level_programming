#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
