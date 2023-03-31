#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: singly linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;

	while (h != 0)
		h = h->next;
		number_of_elements++;

	return (number_of_elements);
}
