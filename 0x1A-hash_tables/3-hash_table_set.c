#include "hash_tables.h"

/**
 * hash_table_set - adds a new  element to the hash table
 * @ht: Hash table
 * @key: The key of the value
 * @value: The value to set
 * Return: 1 when successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	long int index;

	if (ht == NULL)
		return (0);
	if (!key || strlen(key) == 0)
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
