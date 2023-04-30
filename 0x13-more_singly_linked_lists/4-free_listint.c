#include "lists.h"

/**
 * free_listint - frees the list
 * @head: the pointer to the list
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *new = head;
	listint_t *next;

	while (new != NULL)
	{
		next = new->next;
		new->next = NULL;
		free(new);
		new = next;
	}
}
