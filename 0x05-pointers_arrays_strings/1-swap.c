#include "main.h"

/**
 * swap_int - swaps values
 * @a: parameter 1
 * @b: parameter 2
 *
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;

}
