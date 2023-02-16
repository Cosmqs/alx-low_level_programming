#include <stdio.h>

/**
 * main - This program prints the size of various types on a computer it is compiled and run
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n",sizeof(a));
	printf("Size of a int: %ld byte(s)\n",sizeof(b));
	printf("Size of a long int: %ld byte(s)\n",sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(d));
	printf("Size of a float: %ld byte(s)\n",sizeof(f));
	return (0);
}
