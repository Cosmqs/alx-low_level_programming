#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: pointer to a node
 * @n: node to add.
 *
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}


