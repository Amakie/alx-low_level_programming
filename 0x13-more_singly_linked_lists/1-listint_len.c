#include "lists.h"

/**
 * listint_len - prints the number of nodes in the list
 * @h: pointer to the head
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
