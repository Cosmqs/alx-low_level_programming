#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - adds two integers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: 0.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: 0.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: 0.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: 0.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a / b);
}

/**
 * op_mod - returns the remainder of division of two integers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: 0.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
