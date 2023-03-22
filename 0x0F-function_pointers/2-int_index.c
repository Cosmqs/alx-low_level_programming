#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: parameter one
 * @size: number of elements in the array
 * @cmp: pointer to a function to be used to compare values
 * Return: 0.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
