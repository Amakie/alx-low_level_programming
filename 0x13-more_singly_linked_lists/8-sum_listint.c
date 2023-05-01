#include "lists.h"
/**
 * sum_listint - adds the sum of all data n
 * @head: pointer that points to the list
 *
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
