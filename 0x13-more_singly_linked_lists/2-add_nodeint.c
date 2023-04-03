#include "lists.h"

/**
 * add_nodeint - adds node at the biginning of the list
 * @n: point to be added.
 * @head: head
 *
 * Return: added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}

