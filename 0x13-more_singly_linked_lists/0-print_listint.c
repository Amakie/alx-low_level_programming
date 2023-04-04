#include "lists.h"

/**
 * print_listint - prints the members of the list
 * @h: pointer to the first node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
