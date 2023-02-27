#include "main.h"
#include <string.h>


/**
 * _strlen - returns length of a string
 * @s: parameter to be used
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);
	printf("%d\n", len);
	return (0);
}
