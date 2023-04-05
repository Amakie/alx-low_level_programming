#include "lists.h"
/**
 * sum_listint - adds the sum of all data n
 * @head: pointer that points to the list
 * @n: interget
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;
       
	add = add + head->n;
	head = head->next;

	if (head == NULL)
		return (0);
	else

		return (add);
}
