#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: pointer to the head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	if (head == NULL)
	{
		return;
	}

	current = head;
	while (current->next != NULL)
	{
		free(current->prev);
		current = current->next;
	}
	free(current->prev);
	free(current);
}
