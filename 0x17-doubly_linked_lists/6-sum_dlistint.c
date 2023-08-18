#include "lists.h"

/**
 * sum_dlistint - returns the sum of n
 * @head: Pointer to head
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *present = NULL;
	int sum = 0;

	present = head;
	while (present)
	{
		sum += present->n;
		present = present->next;
	}

	return (sum);

}
