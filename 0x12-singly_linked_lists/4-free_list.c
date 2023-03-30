#include "lists.h"

/**
 * free_list - free a lt
 * @head: head of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
