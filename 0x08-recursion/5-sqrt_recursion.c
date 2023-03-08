#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: The number whose natural squareroot is to be returned.
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}

/**
 * _sqrt - calculate the square root
 * @n: number to calculate square root for
 * @i: iterate number
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
