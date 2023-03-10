#include "main.h"


/**
 * _strlen - returns length of a string
 * @s: parameter to be used
 *
 * Return: length (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
