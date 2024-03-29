#include "lists.h"

/**
 * dlistint_len - prints the number of elements of a list
 * @h: The head of the list
 * Return: The number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_num = 0;
	const dlistint_t *current_head = h;

	while (current_head != 0)
	{
		current_head = current_head->next;
		nodes_num++;
	}
	return (nodes_num);
}
