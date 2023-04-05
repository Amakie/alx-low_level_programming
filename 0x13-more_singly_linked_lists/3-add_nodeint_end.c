#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: points to the head of the list
 * @n: interger
 *
 * Return: Address of element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}


	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;

	return (newnode);
}
