#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: pointer to the list
 * @index: index of the node to be found
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;
	if (n < index)
		return (NULL);

	return (head);
}
