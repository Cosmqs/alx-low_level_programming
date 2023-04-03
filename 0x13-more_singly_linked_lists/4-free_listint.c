#include "lists.h"

/**
 * free_listint - frees list
 * @head: head pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}
