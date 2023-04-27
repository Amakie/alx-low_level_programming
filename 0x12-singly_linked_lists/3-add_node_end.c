#incluse "lists.h"

/**
 * add_node_end - add node to the end of a list
 * @str: string to the list
 * @head: head to the list
 *
 * Return: address if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *add_node;
	size_t n;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (n = 0; str[n]; n++);

	newnode->len = n;
	newnode->next = NULL;
	add_node = *head;

	if (add_node == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (add_node->next != NULL)
			add_node = add_node->next;
		add_node->next = add_node;
	}
	return (*head);
}
