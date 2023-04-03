#include "lists.h"

/**
 * listint_len - returns length of a string
 * @h: pointer to the string
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	unsigned int x = 0;
	const listint_t *node;

	node = h;

	while (node != NULL)
	{
		x++;
		node = node->next;
	}
	return (x);
}
