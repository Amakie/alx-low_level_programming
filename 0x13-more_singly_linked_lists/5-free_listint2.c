#include "lists.h"
/**
 * free_listint2 - a function that frees a list
 * @head: pointer to the list
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (*head == NULL)
		return;

	while (*head)
	{
		new = *head;
		(*head) = (*head)->next;
		free(new);
	}
	head = NULL;
}
