#include <stdio.h>

/**
 * _atoi - atoi
 * @s: parameter
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int num = 0;

	while (*s)
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num);
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("%d", _atoi("1010"));
	return (0);
}
