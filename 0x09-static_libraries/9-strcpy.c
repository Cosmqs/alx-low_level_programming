#include "main.h"

/**
 * _strcpy - copies string
 * @dest: parameter
 * @src: parameter
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
