#include "lists.h"

/**
 * print_listint - Prints number of nodes
 * @h: pointer
 *
 * Return: sizet
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		count += 1;
		node = node->next;
	}
	return (count);
}
