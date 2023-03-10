#include <stdio.h>

/**
 * main -Entry point
 * @argc: count
 * @argv: vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
