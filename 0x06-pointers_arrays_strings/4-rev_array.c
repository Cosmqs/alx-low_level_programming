#include "main.h"

/**
 * reverse_array - reverse contents of an array
 * @a: parameter 1
 * @n: parameter 2
 *
 * return: rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
