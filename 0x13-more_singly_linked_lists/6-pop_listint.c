#include "lists.h"

/**
 * pop_listint - deletes head node of the list
 *
 * @head: head pointer of the list
 *
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	current = *head;

	if (current == NULL)
	{
		return (0);
	}
	*head = current->next;

	n = current->n;

	free(current);
	return (n);
}
