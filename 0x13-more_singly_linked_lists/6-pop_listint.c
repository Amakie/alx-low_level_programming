#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: head pointer of the function
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *new;

	int n;

	new = *head;

	if (new == NULL)
		return (0);

	*head = new->next;
	n = new->n;
	free(new);
	return (n);
}
