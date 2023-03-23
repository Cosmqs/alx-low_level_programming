#include "variadic_functions.h"


/**
 * print_numbers - Write a function that prints
 * numbers, followed by a new line.
 * @separator: element one
 * @n: parameter two
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;


	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));

		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
